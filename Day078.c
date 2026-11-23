#include <stdio.h>
#include <stdbool.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Check if the stack is empty
bool isEmpty(Stack *s) {
    return s->top == -1;
}

// Check if the stack is full (helper for push)
bool isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Add an element to the top of the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->items[++(s->top)] = value;
    printf("Pushed %d\n", value);
}

// Remove and return the top element of the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1; // Sentinel value indicating error
    }
    return s->items[(s->top)--];
}

// Return the top element without removing it
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Nothing to peek\n");
        return -1; // Sentinel value indicating error
    }
    return s->items[s->top];
}

int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element (peek): %d\n", peek(&s));
    printf("Popped element: %d\n", pop(&s));
    printf("Top element after pop: %d\n", peek(&s));

    if (isEmpty(&s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
