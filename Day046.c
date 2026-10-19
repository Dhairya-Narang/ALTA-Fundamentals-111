// Find the first character in the string that does not repeat. 
// Input: 'leetcode'  Output: 'l'

#include <stdio.h>
#include <string.h>

int main(){
    int S[101];
    scanf("%s",S);
    for(int i=0;i<strlen(S);i++){
        int count=0;
        for(int j=0;j<strlen(S);j++){
            if(S[i]==S[j]){
                count++;
            }
        }
        if(count==1){
            printf("%c",S[i]);
            break;
        }
    }
    return 0;
}