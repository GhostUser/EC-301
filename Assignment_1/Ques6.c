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
