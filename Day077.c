// Write functions to build a singly linked list from an array, and to convert a linked list back into an array.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* arrayToLinkedList(int arr[], int size) {
    if (size <= 0 || arr == NULL) {
        return NULL;
    }

    struct Node* head = createNode(arr[0]);
    struct Node* current = head;

    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    return head;
}

int* linkedListToArray(struct Node* head, int* outSize) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    *outSize = count;
    if (count == 0) {
        return NULL;
    }

    int* arr = (int*)malloc(count * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    current = head;
    for (int i = 0; i < count; i++) {
        arr[i] = current->data;
        current = current->next;
    }

    return arr;
}

void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeLinkedList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int initialArr[] = {10, 20, 30, 40, 50};
    int size = sizeof(initialArr) / sizeof(initialArr[0]);

    struct Node* head = arrayToLinkedList(initialArr, size);
    printf("Linked List: ");
    printLinkedList(head);

    int newSize = 0;
    int* convertedArr = linkedListToArray(head, &newSize);

    printf("Converted Array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", convertedArr[i]);
    }
    printf("\n");

    freeLinkedList(head);
    free(convertedArr);

    return 0;
}
