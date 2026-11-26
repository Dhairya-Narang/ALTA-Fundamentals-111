// Implement a fixed-size circular queue supporting enqueue, dequeue, front, rear, and isFull/isEmpty checks.


#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
    int size;
} CircularQueue;

void initQueue(CircularQueue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

bool isEmpty(CircularQueue *q) {
    return q->size == 0;
}

bool isFull(CircularQueue *q) {
    return q->size == MAX_SIZE;
}

bool enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        return false;
    }
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->items[q->rear] = value;
    q->size++;
    return true;
}

bool dequeue(CircularQueue *q, int *removedValue) {
    if (isEmpty(q)) {
        return false;
    }
    if (removedValue != NULL) {
        *removedValue = q->items[q->front];
    }
    q->front = (q->front + 1) % MAX_SIZE;
    q->size--;
    return true;
}

bool front(CircularQueue *q, int *frontValue) {
    if (isEmpty(q)) {
        return false;
    }
    *frontValue = q->items[q->front];
    return true;
}

bool rear(CircularQueue *q, int *rearValue) {
    if (isEmpty(q)) {
        return false;
    }
    *rearValue = q->items[q->rear];
    return true;
}

int main(void) {
    CircularQueue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    int val;
    if (front(&q, &val)) {
        printf("Front: %d\n", val);
    }
    if (rear(&q, &val)) {
        printf("Rear: %d\n", val);
    }

    if (dequeue(&q, &val)) {
        printf("Dequeued: %d\n", val);
    }

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);

    printf("Is Full: %s\n", isFull(&q) ? "true" : "false");

    while (!isEmpty(&q)) {
        dequeue(&q, &val);
        printf("Dequeued: %d\n", val);
    }

    printf("Is Empty: %s\n", isEmpty(&q) ? "true" : "false");

    return 0;
}
