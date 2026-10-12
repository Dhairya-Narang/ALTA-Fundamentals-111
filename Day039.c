// Given two sorted arrays, print their union: all distinct elements from both, in 
// sorted order. 
// Input: [1,2,3],[2,3,4]  Output: [1,2,3,4]

#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr1[3];
    int arr2[3];
    bool f,z;
    printf("Enter array 1 : ");
    for(int i=0;i<3;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter array 2 : ");
    for(int i=0;i<3;i++){
        scanf("%d",&arr2[i]);
    }
    int i = 0, j = 0;
    while(i < 3 && j < 3 ) {
        if(arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if(arr1[i] > arr2[j]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while(i < 3) {
        printf("%d ", arr1[i]);
        i++;
    }

    while(j < 3) {
        printf("%d ", arr2[j]);
        j++;
    }
    return 0;

}