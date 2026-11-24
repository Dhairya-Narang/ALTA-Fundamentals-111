// Implement enqueue, dequeue, front, and isEmpty for a queue using a circular array.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *data;
    int front;
    int rear;
    int size;
    int capacity;
} CircularQueue;

CircularQueue* createQueue(int capacity) {
    CircularQueue *q = (CircularQueue*)malloc(sizeof(CircularQueue));
    q->capacity = capacity;
    q->data = (int*)malloc(capacity * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    return q;
}

bool isEmpty(CircularQueue *q) {
    return q->size == 0;
}

bool isFull(CircularQueue *q) {
    return q->size == q->capacity;
}

bool enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        return false;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->data[q->rear] = value;
    q->size++;
    return true;
}

bool dequeue(CircularQueue *q, int *removedValue) {
    if (isEmpty(q)) {
        return false;
    }
    if (removedValue != NULL) {
        *removedValue = q->data[q->front];
    }
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return true;
}

bool front(CircularQueue *q, int *frontValue) {
    if (isEmpty(q)) {
        return false;
    }
    *frontValue = q->data[q->front];
    return true;
}

void destroyQueue(CircularQueue *q) {
    free(q->data);
    free(q);
}

int main(void) {
    CircularQueue *q = createQueue(5);
    int val;

    printf("isEmpty: %s\n", isEmpty(q) ? "true" : "false");

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    if (front(q, &val)) {
        printf("Front: %d\n", val);
    }

    if (dequeue(q, &val)) {
        printf("Dequeued: %d\n", val);
    }

    if (front(q, &val)) {
        printf("Front: %d\n", val);
    }

    printf("isEmpty: %s\n", isEmpty(q) ? "true" : "false");

    destroyQueue(q);
    return 0;
}
