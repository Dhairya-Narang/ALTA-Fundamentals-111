// Reverse the given string in place. 
// Input: 'hello'  Output: 'olleh'

#include <stdio.h>

int main(){
    char S[5];
    scanf("%s",S);
    for(int i=0;i<5/2;i++){
        char temp = S[i];
        S[i] = S[4-i];
        S[4-i] = temp;
    }
    printf("%s",S);
}