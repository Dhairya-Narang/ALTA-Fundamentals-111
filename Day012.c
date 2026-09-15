// Write a program that takes a month number (1-12) and prints its season (Winter, Summer, Monsoon, Autumn) 
// using switch-case with intentional fall-through so multiple month cases share one season block.


#include <stdio.h>

int main(){
        int a ;
        scanf("%d",&a);
        switch(a){
            case 12: case 1: case 2:
                printf("Winter");
                break;
            case 3: case 4: case 5:
                printf("Summer");
                break;
            case 6: case 7: case 8:
                printf("Monsoon");
                break;
            case 9: case 10: case 11:
                printf("Autumn");
                break;
            default:
                printf("Error");
        } 

   return 0;



}
