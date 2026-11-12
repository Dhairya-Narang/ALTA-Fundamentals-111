#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findMinDiff(int arr[], int n, int m) {
    if (m == 0 || n == 0)
        return 0;
    if (n < m)
        return -1;

    qsort(arr, n, sizeof(int), compare);

    int min_diff = 1e9;
    for (int i = 0; i <= n - m; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", findMinDiff(arr, n, m));
    return 0;
}
