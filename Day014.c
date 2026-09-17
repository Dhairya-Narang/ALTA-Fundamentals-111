// Write a program to print all numbers from N down to 1 using a while loop. Input: N = 5  Output: 5 4 3 2 1

#include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int x;
    scanf("%d",&x);
    int i=x;
    while(i>=1){
    	printf("%d ",i);
    	i=i-1;
    }
   
   	return 0;
}		
