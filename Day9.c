// Write a program that takes weight (kg) and height (m), computes BMI = weight / height^2, and categorizes it as
// Underweight (<18.5), Normal (18.5-24.9), Overweight (25-29.9), or Obese (30+) using nested if-else.
#include <stdio.h>
int main(){
    float weight, height;
    scanf("%f %f",&weight,&height);
    float BMI = weight/(pow(height,2));
    if (BMI<18.5){
        printf("Underweight");
    }else if (BMI>=18.5 && BMI<=24.9){
        printf("Normal");
    }else if(BMI>=25 && BMI<=29.9){
        printf("Overweight");
    }else{printf("Obese");}
}