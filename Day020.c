// Write a program that prints numbers from 1 to N, but for multiples 
// of 3 print "Fizz" instead of the number, for multiples of 5 print 
// "Buzz", and for multiples of both print "FizzBuzz". 
// Input: N = 15

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x;
		scanf("%d",&x);
		for(int i = 1;i<=x;i++){
	        if(i%3==0 && i%5==0){
	            printf("FizzBuzz\n");
	        }else if(i%3==0){
	        	printf("Fizz\n");
	        }else if(i%5==0){
	        	printf("Buzz\n");
	        }else{printf("%d\n",i);}
    	}
    	return 0;

}
