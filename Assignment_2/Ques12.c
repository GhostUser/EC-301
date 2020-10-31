/*
12. Program to deduct discount of 10% if the amount of purchase is
more than 1000 using conditional operators.
*/

#include <stdio.h>

int main(){
    int price,dist,amount;
    printf("Enter the price: ");
    scanf("%d", &price);
    if (price>1000){
        dist=(price*0.1);
    }
    amount=price-dist;
    printf("The payable amount is %d", amount);
    return 0;
}