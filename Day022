// In C/C++, write a function using a pointer or reference parameter (&) to modify a caller's 
// variable, and contrast it with a plain pass-by-value version that does not. In Java/JS, 
// demonstrate the same limitation Java has for primitives: write a method that tries to modify 
// an int parameter (it will NOT affect the caller's variable -- Java has no true 
// pass-by-reference),then contrast this by modifying a field inside a passed object or array 
// instead (which DOES affect the caller's data, since the object reference itself was passed).
#include <stdio.h>

void multiply_by_pointer(int *num, int factor) {
    *num = (*num) * factor;
}
void pass_by_value(int num, int factor){
	num = num * factor;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    scanf("%d %d", &a, &b);

    pass_by_value(a,b);
    printf("pass_by_value:%d\n", a);


    multiply_by_pointer(&a, b);
    printf("multiply_by_pointer:%d\n", a);

    return 0;
}	
