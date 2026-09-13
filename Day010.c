// Write a program that checks whether a given day, month, and year form a valid calendar date, using 
// if-else to account for the correct number of days in each month and leap years for February. 
// Input: 30 2 2024  Output: Invalid Date



#include <stdio.h>
#include <stdbool.h>

int main(){
    int day, month, year;
    scanf("%d %d %d",&day,&month,&year);
    bool statement;
    if(year>0){
        if(month>=1 && month<=12){
            if(month==4 || month==6 || month==9 || month==11){
                if(day>=1 && day<=30){
                    statement = true;
                }else{statement = false;}
            }else if(month==2){
                if((year%4==0 && year%100 != 0)||(year%400==0)){
                    if(day>=1 && day<=29){
                        statement = true;
                    }else{statement = false;}
                }else{
                    if(day>=1 && day<=28){
                        statement = true;
                    }else{statement=false;}
                }
            }else{
                if(day>=1 && day<=31){
                    statement = true;
                }else {statement=false;}
            }
        }else{statement=false;}
    }else{statement=false;}
    
   printf("%s\n",statement ? "Valid Date":"Invalid Date" );


   return 0;



}
