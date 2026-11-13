#include <stdio.h>

void findSubarray(int arr[], int n, int target) {
    int start = 0, current_sum = 0;
    
    for (int end = 0; end < n; end++) {
        current_sum += arr[end];
        
        while (current_sum > target && start < end) {
            current_sum -= arr[start];
            start++;
        }
        
        if (current_sum == target) {
            printf("indices %d to %d\n", start, end);
            return;
        }
    }
    
    printf("No subarray found\n");
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 33;
    
    findSubarray(arr, n, target);
    
    return 0;
}
