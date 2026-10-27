// Compute base^exponent using plain recursive multiplication (not fast exponentiation). 
// Input: base=2, exp=5  Output: 32

#include <stdio.h>

long long power(long long base, int exp){
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

int main(){
    long long base;
    int exp;
    printf("Enter base: ");
    if (scanf("%lld", &base) != 1){
        printf("Invalid input for base.\n");
        return 1;
    }
    printf("Enter exponent: ");
    if (scanf("%d", &exp) != 1){
        printf("Invalid input for exponent.\n");
        return 1;
    }
    if (exp < 0){
        printf("Error: This simple recursion supports non-negative exponents only.\n");
        return 1;
    }
    long long result = power(base, exp);
    printf("Output: %lld\n", result);
    return 0;
}