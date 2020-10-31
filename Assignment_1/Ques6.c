/*
Q6. Write a program to calculate the area of a triangle using Hero’s formula.
Hints: If a,b and c are the sides of the triangle, S=(a+b+c)/2,
area=sqrt(s*(s-a)*(s-b)*(s-c))
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s,area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/(float)2;
    area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is %f", area);
	return 0;
}
