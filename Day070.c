// Given a singly linked list, insert a new node at a given position. Input: list=1->2->4, insert 3 at position 3  
// Output: 1->2->3->4

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

struct Node* insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = createNode(data);

    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node* current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf("->");
        }
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(4);

    printf("Original list: ");
    printList(head);

    head = insertAtPosition(head, 3, 3);

    printf("Output: ");
    printList(head);

    return 0;
}
