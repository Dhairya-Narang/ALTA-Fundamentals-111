// Return the Nth Fibonacci number using plain recursion (no memoization). 
// Input: N=6  Output: 8

#include <stdio.h>


int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 6;
    printf("Input: N = %d\n", n);
    printf("Output: %d\n", fibonacci(n));
    return 0;
}
