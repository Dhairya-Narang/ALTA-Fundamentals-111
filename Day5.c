// Write a program that prints the boolean result of checking whether a withdrawal amount is positive AND does
// not exceed the account balance -- print the True/False result directly, no message or branching needed. 
// Input: balance=5000, amount=3000  Output: True
#include <stdio.h>
int main(){
    int balance=5000;
    int amount=3000;
    printf("%s", amount>0 && balance>=amount ? "True" : "False" );   
}