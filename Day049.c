// Print numbers from 1 to N using only recursion, no loop. 
// Input: N=5  Output: 1 2 3 4 5

#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}