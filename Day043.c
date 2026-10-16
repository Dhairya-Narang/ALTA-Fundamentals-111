// Given a string, count how many vowels, consonants, digits, and spaces it contains. 
// Input: 'geeks for geeks121'  Output: Vowels=5 Consonants=8 Digits=3 Spaces=2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char S[500];
    if (fgets(S, sizeof(S), stdin) != NULL){
        S[strcspn(S, "\n")] = '\0';
        int z = strlen(S)-1;
        int vowel=0;
        int consonants=0;
        int digits=0;
        int space=0;
            while(z>=0){
                if(S[z]=='A' || S[z]=='a' || S[z]=='E' || S[z]=='e' ||S[z]=='I' || S[z]=='i' || S[z]=='o' || S[z]=='O' || S[z]=='U' || S[z]=='u'){
                    vowel++;
                }else if(isalpha(S[z])){
                    consonants++;
                }else if(isalnum(S[z])){
                    digits++;
                }else{
                    space++;
                }
                z--;
            }
        printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d",vowel,consonants,digits,space);
            
    }

    
    return 0;
}