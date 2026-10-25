// Find the sum of digits of a number using recursion. 
// Input: 1234  Output: 10

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number = 1234;
    int result = sumOfDigits(number);
    printf("Input: %d\n", number);
    printf("Output: %d\n", result);
    return 0;
}
