// Write a program that declares a 3x3 two-dimensional array, fills it with the numbers 1 to 9
// in row-major order, and prints it as a 3x3 grid. Output:
// 1 2 3
// 4 5 6
// 7 8 9

#include <stdio.h>
int main(){
    int array[9];
    for(int i=0;i<9;i++){
        array[i]= i+1;
        printf("%d ",array[i]);
        if((i+1)%3==0){
            printf("\n");
        }
    }
}
