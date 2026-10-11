// Given two arrays, return their intersection (each element appears once). 
// Input: [1,2,2,1],[2,2]  Output: [2]

#include <stdio.h>

int main(){
    int arr1[4];
    int arr2[2];
    printf("Enter array 1 : ");
    for(int i=0;i<4;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter array 2 : ");
    for(int i=0;i<2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<2;i++){
        if(arr1[i]==arr2[i]){
            printf("%d",i+1);
            break;
        }
    }
    return 0;


}