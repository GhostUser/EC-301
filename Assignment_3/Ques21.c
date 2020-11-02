/*
Q21. Program to generate Fibonacci series up to
Nth term, where N is a number given by user.
*/
#include <stdio.h>
/*
int fibonacci(int n){
    if (n<=1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
*/

int main(){
    int n, result, arr[100];
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        if (i<=1){
            arr[i]=1;
        }else{
            arr[i]=arr[i-1]+arr[i-2];
        }   
    }
    printf("The fibonacci sequence is:");
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}