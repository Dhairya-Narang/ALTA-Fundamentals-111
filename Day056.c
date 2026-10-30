// Given an array and a target value, return the index of the target using a simple left-to-right scan. 
// Input: [5,3,8,1], target=8  Output: 2

#include <stdio.h>

int findTargetIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 3, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int index = findTargetIndex(arr, size, target);

    if (index != -1) {
        printf("Index of %d: %d\n", target, index);
    } else {
        printf("Target %d not found in array.\n", target);
    }

    return 0;
}
