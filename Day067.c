#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

#define TABLE_SIZE 100

unsigned int hash(int key) {
    return abs(key) % TABLE_SIZE;
}

void insert(Node* hashTable[], int key) {
    unsigned int h = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = key;
    newNode->next = hashTable[h];
    hashTable[h] = newNode;
}

int search(Node* hashTable[], int key) {
    unsigned int h = hash(key);
    Node* curr = hashTable[h];
    while (curr != NULL) {
        if (curr->data == key) {
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}

void freeTable(Node* hashTable[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* curr = hashTable[i];
        while (curr != NULL) {
            Node* temp = curr;
            curr = curr->next;
            free(temp);
        }
    }
}

void findPairsWithDifferenceK(int arr[], int n, int k) {
    Node* hashTable[TABLE_SIZE] = {NULL};
    
    for (int i = 0; i < n; i++) {
        insert(hashTable, arr[i]);
    }

    Node* visitedTable[TABLE_SIZE] = {NULL};

    printf("Pairs with difference %d:\n", k);
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        int target1 = val + k;
        int target2 = val - k;

        if (search(hashTable, target1)) {
            if (k != 0 || val != target1) {
                if (!search(visitedTable, val) && !search(visitedTable, target1)) {
                    printf("(%d, %d)\n", val < target1 ? val : target1, val < target1 ? target1 : val);
                    insert(visitedTable, val);
                    insert(visitedTable, target1);
                }
            }
        }
        
        if (search(hashTable, target2)) {
            if (k != 0 || val != target2) {
                if (!search(visitedTable, val) && !search(visitedTable, target2)) {
                    printf("(%d, %d)\n", val < target2 ? val : target2, val < target2 ? target2 : val);
                    insert(visitedTable, val);
                    insert(visitedTable, target2);
                }
            }
        }
    }

    freeTable(hashTable);
    freeTable(visitedTable);
}

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    findPairsWithDifferenceK(arr, n, k);

    return 0;
}
