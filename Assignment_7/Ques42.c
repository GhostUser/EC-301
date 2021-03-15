#include<stdio.h>

struct coordinate
{
    float x;
    float y;
};
typedef struct coordinate point;

point sum(point s1, point s2)
{
    point s3;

    s3.x = s1.x + s2.x;
    s3.y = s1.y + s2.y;

    return s3;
}

int main()
{
    point p1,p2,p3;

    printf("Enter the X and Y coordinates of the first point:\n");
    scanf("%f %f",&p1.x,&p1.y);

    printf("Enter the X and Y coordinates of the second point:\n");
    scanf("%f %f",&p2.x,&p2.y);

    p3 = sum(p1,p2);

    printf("The sum of the points is:\n%fx + %fy",p3.x,p3.y);
}
