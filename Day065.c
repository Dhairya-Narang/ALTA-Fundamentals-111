#include <stdio.h>

void rearrange(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        }
        else if (arr[right] >= 0) {
            right--;
        }
        else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
