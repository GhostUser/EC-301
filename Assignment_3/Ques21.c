/*
Q21. Program to generate Fibonacci series up to
Nth term, where N is a number given by user.
*/
#include <stdio.h>

int fibonacci(int n){
    if (n<=1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n, result, arr[100];
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        arr[i]=fibonacci(i);
    }
    printf("The fibonacci sequence is:");
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}