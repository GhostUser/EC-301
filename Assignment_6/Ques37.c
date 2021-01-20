#include <stdio.h>
#include <math.h>

double fact(int n){
    if (n>=1){
        return n*fact(n-1);;
    }else{
        return 1;
    }
}

int main(){
    int n; 
    double sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=1; i<n+1;i++){
        sum+= pow(i,i)/fact(i);
    }
    printf("The result is: %0.3f", sum);
}
