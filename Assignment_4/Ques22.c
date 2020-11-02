/*
Q22. Write a C program to input a decimal
number. And display the equivalent binary
number.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, p,rem, bi=0, i=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    p=n;
    while(n!=0){
        rem=n%2;
        n=n/2;
        bi=bi+rem*pow(10,i);
        i++;
    }
    printf("The binary equivalent of %d is: %d", p, bi);
}