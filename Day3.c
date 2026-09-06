// Write a program that stores a boolean variable representing whether a light is on, prints its state, flips
// it to the opposite value without using if-else (a direct boolean negation), and prints the new state.
// Input: True Output: On, then Off
#include <stdio.h>
#include <stdbool.h>
int main(){
    char Input[10];
    scanf("%s",&Input);
    bool light = (strcmp(Input, "true")==0 || strcmp(Input, "0") == 0);
    printf("%s",light? "On" : "Off");
    light =!light;
    printf(", then %s ",light? "On" : "Off");
}