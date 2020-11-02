/*
Q20.Write a C program to find factorial of a
number entered by user.
*/
#include <stdio.h>
/*
int factorial(int n){
    if (n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
*/

int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result=1;
    for (int i=1; i<n+1; i++){
        result=result*i;
    }
    printf("The factorial of %d is: %d", n, result);
    return 0;
}