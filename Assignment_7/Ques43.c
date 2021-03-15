/*
Q43. Write a program to input and display N integers,
allocate the memory dynamically.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *ptr;

    printf("Enter the number of integers: ");
    scanf("%d",&n);

    ptr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
}