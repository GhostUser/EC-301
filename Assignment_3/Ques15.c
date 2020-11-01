/*
Q15. Write a C program to input a number and find
the sum of the digits.
*/

#include <stdio.h>

int main(){
    int n, s=0, temp;
    scanf("%d", &n);
    while (n>0){
        temp=n%10;
        s=s+temp;
        n=n/10;
    }
    printf("%d", s);
}