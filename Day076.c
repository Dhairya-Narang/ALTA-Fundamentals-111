// Given a singly linked list, print its values in reverse order without changing the list's structure (use recursion). 
//   Input: 1->2->3  Output: 3 2 1

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printReverse(struct Node* head) {
    if (head == NULL) {
        return;
    }
    printReverse(head->next);
    printf("%d ", head->data);
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printReverse(head);
    printf("\n");

    return 0;
}
