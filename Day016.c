// Write a program to check whether a number reads the same forwards and backwards using a loop. 
// Input: 121  Output: Palindrome

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int x;
	int rev = 0;
	scanf("%d",&x);
	for(int n= x;n>0;n = n/10){
		int rem = n%10;
		rev = (rev*10)+rem;
		
	}
	if(rev==x){
		printf("Palindrome");
	}else{
		printf("Not Palindrome");
	}
	
}		
