// Write a program that prints numbers from 1 to N but uses continue to 
// skip printing any multiple of 3. 
// Input: N = 10  Output: 1 2 4 5 7 8 10

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x;
		scanf("%d",&x);
		for(int i = 1;i<=x;i++){
	        if(i%3!=0){
	            printf("%d ",i);
	        }
    }

}
