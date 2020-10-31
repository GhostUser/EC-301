/*
Q5. Write a program to swap two numbers (a) using temporary variables (b) without
using temporary variables.
*/

#include <stdio.h>

int main()
{
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("After swap the numbers are %d %d", x,y);
	return 0;
}
