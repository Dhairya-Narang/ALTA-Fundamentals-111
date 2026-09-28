// Write a program that declares an array of 5 integers, takes input for each element from the user, 
// then prints all elements on one line, space-separated. 
// Input: 3 1 4 1 5  Output: 3 1 4 1 5
# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int A_array[5];
		for(int i=0;i<5;i++){
			scanf("%d",&A_array[i]);
		}
		for(int i=0;i<5;i++){
			printf("%d ",A_array[i]);
		}
		return 0;

}
