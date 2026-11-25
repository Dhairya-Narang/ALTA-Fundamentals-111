// Implement push, pop, peek, and isEmpty for a stack using a singly linked list (no fixed size limit).

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int isEmpty(struct Node* top) {
    return top == NULL;
}

void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    printf("Top element: %d\n", peek(top));
    printf("Popped: %d\n", pop(&top));
    printf("Popped: %d\n", pop(&top));
    printf("Is stack empty? %s\n", isEmpty(top) ? "Yes" : "No");
    printf("Popped: %d\n", pop(&top));
    printf("Is stack empty? %s\n", isEmpty(top) ? "Yes" : "No");

    return 0;
}
