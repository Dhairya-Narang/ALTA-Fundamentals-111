// Given a singly linked list and an index N, return the value of the Nth node from the start (1-indexed). 
// Input: 1->2->3->4->5, N=3  Output: 3

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int getNthNode(struct Node* head, int n) {
    struct Node* current = head;
    int count = 1;

    while (current != NULL) {
        if (count == n) {
            return current->data;
        }
        count++;
        current = current->next;
    }

    return -1;
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    int n = 3;
    int result = getNthNode(head, n);

    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("Index out of bounds\n");
    }

    return 0;
}
