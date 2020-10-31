/*
Q3. Write a program to accept an uppercase alphabet and display the corresponding
lowercase alphabet.
*/

#include <stdio.h>

/* written on 28th sept*/
int main()
{
    char a;
    printf("Enter a uppercase char: ");
    scanf("%c", &a);
    printf("The lowercase char is %c", a+32);
	return 0;
}
