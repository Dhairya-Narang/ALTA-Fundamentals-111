// Write a program that takes two numbers and an operator symbol (+, -, *, /) and performs the 
// corresponding operation using switch-case on the operator. 
// Input: 10 4 *  Output: 40


#include <stdio.h>

int main(){
   
        int a , b;
        char operation;
        scanf("%d %d %c",&a,&b,&operation);
        switch(operation){
            case '+':
                printf("%d\n",a+b);
                break;
            case '-':
                printf("%d\n",a-b);
                break;
            case '/':
                printf("%d\n",a/b);
                break;
            case '*':
                printf("%d\n",a*b);
                break;
        } 

   return 0;



}
