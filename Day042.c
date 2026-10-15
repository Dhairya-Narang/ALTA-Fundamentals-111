// Check if a given string reads the same forwards and backwards (case-insensitive). 
// Input: 'Madam'  Output: true

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
    char S[5];
    scanf("%s",S);
    bool f=true;
    for(int i=0;i<5/2;i++){
        if(S[i]==toupper(S[4-i]) || S[i]==tolower(S[4-i])){
            continue;
        }
        
        f=false;
        break;
    }
    if(f==true){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}