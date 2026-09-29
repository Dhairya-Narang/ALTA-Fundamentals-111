// Write a program that declares an array with 5 fixed values in code, prints the element at a given 
// index, then changes the value at another given index and prints the full array again. 
// Input: array=[10,20,30,40,50], read index=2, change index=0 to 99  
// Output: Read: 30, Updated array: 99 20 30 40 50

# include <stdio.h>

int main(){

    int array[5];
    printf("Enter no. :");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }

    int read,change,change_to;
    printf("Read index :");
    scanf("%d",&read);
    printf("change index =");
    scanf("%d %d",&change,&change_to);
    array[change]=change_to;

    printf("Read : %d\n",array[read]);
    printf("Updated array: ");
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }


	return 0;
} 
