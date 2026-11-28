// Given a stack, reverse the order of its elements using only recursion (no extra stack or array, no loop).

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int arr[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int val) {
    if (!isFull(s)) {
        s->arr[++(s->top)] = val;
    }
}

int pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->arr[(s->top)--];
    }
    return -1;
}

void insertAtBottom(Stack *s, int item) {
    if (isEmpty(s)) {
        push(s, item);
        return;
    }
    int temp = pop(s);
    insertAtBottom(s, item);
    push(s, temp);
}

void reverseStack(Stack *s) {
    if (isEmpty(s)) {
        return;
    }
    int temp = pop(s);
    reverseStack(s);
    insertAtBottom(s, temp);
}

void printStack(Stack *s) {
    if (isEmpty(s)) {
        return;
    }
    int temp = pop(s);
    printf("%d ", temp);
    printStack(s);
    push(s, temp);
}

int main() {
    Stack s;
    init(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    printf("Original (top to bottom): ");
    printStack(&s);
    printf("\n");

    reverseStack(&s);

    printf("Reversed (top to bottom): ");
    printStack(&s);
    printf("\n");

    return 0;
}
