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

struct Node* insertSorted(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    if (head == NULL || head->data >= val) {
        newNode->next = head;
        return newNode;
    }
    struct Node* curr = head;
    while (curr->next != NULL && curr->next->data < val) {
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d", curr->data);
        if (curr->next != NULL) {
            printf("->");
        }
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(3);
    head->next->next = createNode(5);

    head = insertSorted(head, 4);
    printList(head);

    return 0;
}
