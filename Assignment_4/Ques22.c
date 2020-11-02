/*
Q22. Write a C program to input a decimal
number. And display the equivalent binary
number.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int dec, p,rem, bi=0, i=0;
    printf("Enter a number: ");
    scanf("%d", &dec);
    p=dec;
    while(dec!=0){
        rem=dec%2;
        dec=dec/2;
        bi=bi+rem*pow(10,i);
        i++;
    }
    printf("The binary equivalent of %d is: %d", p, bi);
}