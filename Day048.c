// Given a string, determine whether all of its characters are distinct (no repeats). 
// Input: 'abcdef'  Output: true

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char S[27];
    if (scanf("%26s", S) != 1) {
        return 0;
    }
    int len = strlen(S);
    bool is_distinct = true;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (S[i] == S[j]) {
                is_distinct = false;
                break;
            }
        }
        if (!is_distinct) {
            break;
        }
    }
    if (is_distinct) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}