/*
Q23. Write a C program to input a binary
number. And display the equivalent decimal
number.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int bin, rem, dec=0, i=0, p;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    p=bin;
    while(bin!=0){
        rem=bin%10;
        dec=dec+rem*pow(2,i);
        bin=bin/10;
        i++;
    }
    printf("The decimal equivalent of %d is: %d", p, dec);
}