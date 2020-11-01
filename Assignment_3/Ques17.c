/*
Q17. Write a C program to check whether a given
three digit number is an Armstrong number or
not.
*/

#include <stdio.h>
#include <math.h>


int main(){
    int n, am=0, temp, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    d=n;
    while (d>0){
        temp=d%10;
        am=am+temp*temp*temp;
        d=d/10;
    }
    if (am==n){
        printf("%d is a armstrong number", n);
    }else{
        printf("No");
    }
    return 0;
}