// Given an array, check whether it is sorted in non-decreasing order. 
// Input: [10,20,30]  Output: true

#include <stdio.h>
#include <stdbool.h>

int main(){
    int array[3];
    printf("Enter the number :");
    for(int i=0;i<3;i++){
        scanf("%d",&array[i]);
    }

    bool f=true;
    for(int i=0;i<3-1;i++){
        if(array[i]>array[i+1]){
            f=false;
        }
    }

    if(f==false)printf("false");
    else printf("true");
}