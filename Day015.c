// Write a program to check whether a given number is prime using a loop. Input: 29  Output: Prime

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int x;
	scanf("%d",&x);
	for(int i = 2;i<x;i++){
		if(x%i==0){
			printf("Not a Prime");
			return 0;
		}
	}
	printf("Prime");

}	
