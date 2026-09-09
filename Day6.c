// Write a program to find and print the largest of three given numbers using nested if-else. 
// Input: 4 9 6  Output: 9
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d",a);
    }else if(b>a && b>c){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
}