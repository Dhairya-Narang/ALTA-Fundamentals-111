// Write a program to swap the values of two variables using a third (temporary) variable.
// Input: a = 5, b = 10  Output: a = 10, b = 5
#include <stdio.h>
int main(){
    int a,b;
    int temp;
    scanf("a = %d, b = %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d",a,b);
}