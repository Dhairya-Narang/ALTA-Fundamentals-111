// Check whether a string is a palindrome using recursion with two shrinking pointers, not a loop. 
// Input: 'madam'  Output: true

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindromeRecursive(const char *str, int left, int right){
    if(left >= right){
        return true;
    }
    if(str[left] != str[right]){
        return false;
    }
    return isPalindromeRecursive(str, left + 1, right - 1);
}

bool isPalindrome(const char *str){
    int len = strlen(str);
    if (len == 0) return true;
    return isPalindromeRecursive(str, 0, len - 1);
}

int main(){
    char input[] = "madam";
    bool result = isPalindrome(input);
    printf("Input: '%s'\n", input);
    printf("Output: %s\n", result ? "true" : "false");
    return 0;
}
