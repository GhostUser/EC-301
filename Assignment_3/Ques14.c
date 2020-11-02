/*
Q14. Write a C program to compute x raised to the
power y without using build in function pow().
*/

#include <stdio.h>
/*
int power(int x,int y){
    if (y==0){
        return 1;
    }
    return x*power(x,y-1);
}
*/

int main(){
    int x, y, r=1,i;
    printf("Enter a number x and raised power y: ");
    scanf("%d %d", &x, &y);
    r=1;
    i=y;
    while(i>0){
        r=r*x;
        i=i-1;
    }
    printf("%d raised to power %d is %d", x,y,r);
    return 0;
}