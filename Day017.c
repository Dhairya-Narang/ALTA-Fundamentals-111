// Write a program to print the first N terms of the Fibonacci series using a loop (no recursion). 
// Input: N = 7  Output: 0 1 1 2 3 5 8

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x;
		scanf("%d",&x);
		int a = 0 , b=1 ;
		for(int i = 1;i<=x;i++){
			int next =0;
			printf("%d ",a );
			next = a+b;
			a=b;
			b=next;

		}
		return 0;

}
