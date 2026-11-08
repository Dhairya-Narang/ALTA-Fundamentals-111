#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool hasPairWithSum(int arr[], int size, int target) {
    qsort(arr, size, sizeof(int), compare);

    int left = 0;
    int right = size - 1;

    while (left < right) {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target) {
            printf("Pair found: %d + %d = %d\n", arr[left], arr[right], target);
            return true;
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int target = 16;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasPairWithSum(arr, size, target)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}
