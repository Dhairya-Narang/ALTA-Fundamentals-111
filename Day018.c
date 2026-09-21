// Write a program that loops through numbers starting from 1 and stops (using break) as soon as 
// it finds the first number divisible by 7, printing that number.

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	 for(int i = 1;;i++){
        if(i%7==0){
            printf("%d",i);
            break;
        }
    }

}
