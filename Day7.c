// Write a program to check whether a given year is a leap year (divisible by 4, but not by 100 unless also
// by 400). 
// Input: 2024  Output: Leap Year
#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    printf("%s",(year%4==0 && year%100 != 0)||(year%400==0) ? "Leap Year":"Not a Leap Year");
}