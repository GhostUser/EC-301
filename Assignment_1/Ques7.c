/*
Q7. Write a program to accept the coordinates of two points in 2D plane and compute
their distance by using Euclidean distance measure.
Hints: dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2))
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    float dist;
    printf("Enter the first coordinate: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the second coordinate: ");
    scanf("%d %d", &x2,&y2);
    dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("The distance between both coordinates is %f", dist);
	return 0;
}
