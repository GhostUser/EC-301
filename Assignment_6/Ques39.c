#include <stdio.h>

int fibonacci(int n){
    if (n==1){
        return 0;
    }
    else if (n<=2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Enter the number of fibonacci terms: ");
    scanf("%d", &n);
    int fib[n+2];
    for (int i=0; i<n+1; i++){
        fib[i]=fibonacci(i);
    }
    printf("The fibonacci sequence of %d-terms is:\n");
    for (int i=1; i<n+1; i++){
        printf("%d ",fib[i]);
    }
    printf("\n");
}