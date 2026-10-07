// Given an array, reverse it in place. 
// Input: [1,4,3,2,6,5]  Output: [5,6,2,3,4,1]

#include <stdio.h>

int main(){
     
    int array[6];
    for(int i=0;i<6;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<5;i++){
        int temp = array[i];
        array[i] = array[5-i];
        array[5-i] = temp;
    }

    for(int i=0;i<6;i++){
        printf("%d ",array[i]);
    }

    return 0;
}