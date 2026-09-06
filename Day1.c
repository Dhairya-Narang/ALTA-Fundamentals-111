// Write a program that takes the number of days a person has lived and estimates their age using integer
// division by 365, printing both the whole years and the remainder days.
// Input: 7305 Output: 20 years, 5 days
#include <stdio.h>
int main(){
    int days_lived;
    scanf("%d",&days_lived);
    int years = days_lived/365;
    int RemainingDays = days_lived%365;
    printf("%d years, %d days",years,RemainingDays);
}