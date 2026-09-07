// Write a program that calculates the final price of an item after applying a 10% discount, then adding 18% 
// tax on the discounted price. 
// Input: price = 1000  Output: 1062
#include <stdio.h>
int main(){
    int price ;
    scanf("%d",&price);
    int Price_discount = (price*90)/100;
    int Final_price = (Price_discount*118)/100;
    printf("%d",Final_price);
}