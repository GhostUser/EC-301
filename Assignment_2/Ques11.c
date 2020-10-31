/*
11. Program to get the marks obtained by a student in five subjects
(out of 100) and display the grades according to the following
i. 80% and above A grade
ii. 60% and above B grade
iii. 40% and above C grade
iv. Below 40% is F grade
*/

#include <stdio.h>

int main(){
    int a,b,c,d,e;
    float avg;
    printf("Enter the grades for subjects a, b, c, d, e: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg=(float)(a+b+c+d+e)/5;
    if (avg>=80){
        printf("A");
    }else if (80>=avg>=60){
        printf("B");
    }else if (60>=avg>=40){
        printf("C");
    }else{
        printf("F");
    }
    return 0;
}