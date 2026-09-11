// Write a program to check whether a given number is divisible by both 3 and 5. 
// Input: 45  Output: Yes
#include <stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    printf("%s", X%3 == 0 && X%5 == 0 ? "Yes":"No");
}