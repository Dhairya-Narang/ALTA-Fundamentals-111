// Write a function that takes two integers and returns both the quotient and remainder of their division,
// using whatever mechanism your language supports (tuple, pair, struct, or output parameters).

#include <stdio.h>

void get_quotient_and_remainder(int a, int b, int *quotient, int *remainder) {
    *quotient = a / b;     
    *remainder = a % b;    
}

int main() {
    int a = 3, b = 6;
	int q, r;

    get_quotient_and_remainder(a, b, &q, &r);

	printf("Quotient: %d, Remainder: %d\n", q, r);
	return 0;
}
