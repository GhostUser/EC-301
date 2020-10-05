#include <stdio.h>

int main()
{
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x,&y);
    printf("Before Swap a=%d b=%d\n", x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After Swap a=%d b=%d", x,y);
	return 0;
}
