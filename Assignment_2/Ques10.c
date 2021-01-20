/*
10. Program to find the roots of a quadratic equation.
*/

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(){
    int a,b,c;
    double d,x1,x2;
    printf("Enter a,b,c for values of equation ax2+bx+c: ");
    scanf("%d %d %d", &a,&b,&c);
    d=(b*b)-4*a*c;
    if(d==0){
        x1=(-b)/2*a;
        x2=x1;
        printf("\nThe solution is %f and %f", x1, x2);
    }else if(d>0){
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("\nThe solution is %f and %f", x1, x2);
    }else{
        x1=(-b)/2*a;
        x2=__cdec1_csqrt(d)/2*a;
        double _Complex z1;
        double _Complex z2;
        z1= x1 + x2;
        z2= x1 - x2;
        printf("\nThe solution is (%.1f  %.1fi) and (%.1f  %.1fi)", creal(z1), cimag(z1), creal(z2), cimag(z2));
    } 
    return 0;
}