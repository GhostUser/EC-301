#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5,sum;
    float avg;
    printf("Enter 5 integers:");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    sum=n1+n2+n3+n4+n5;
    printf("The sum of numbers is %d \n", sum);
    avg=sum/(float)5;
    printf("The average of number is: ");
    printf("%f", avg);
    return 0;
}
