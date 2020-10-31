/*
Q2. Program to get two number and perform addition, subtraction, multiplication,
division and modulo operations of the numbers.
*/

#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("The sum of the numbers is %d\n", x+y);
    printf("The difference of the numbers is %d\n", x-y);
    printf("The product of the numbers is %d\n", x*y);
    printf("The division of both numbers is %f\n",(float) x/y);
    printf("The modulo of both numbers is %d\n", x%y);
	return 0;
}
