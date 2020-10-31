/*
Q4. Write a program to convert the temperature in Fahrenheit to Celsius.
Hints: C=5/9*(F-32)
*/

#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter the temp in Fahrenheit: ");
    scanf("%f", &f);
    c=(f-32)*5/(float)9;
    printf("The temp in Celsius is %f", c);
	return 0;
}
