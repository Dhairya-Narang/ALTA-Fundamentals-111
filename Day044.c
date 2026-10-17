// Print the frequency of every character in the string in alphabetical order. 
// Input: 'geeksforgeeks'  Output: e4 f1 g2 k2 o1 r1 s2

#include <stdio.h>

int main(){
    char S[13];
    scanf("%s",S);
    for(char i='a';i<='z';i++){
        int count = 0;
        for(int j=0;j<13;i++){
            if(S[j]==i){
                count++;
            }
        }
        if(count>0){
            printf("%c%d ",i,count);
        }
    }
    return 0;
}