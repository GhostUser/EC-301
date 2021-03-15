#include <stdio.h>
#include <string.h>

struct student
{
    /* data */
    char name[50];
    char department[50];
    char roll[50];
    float cgpa;
};

struct employees
{
    /* data */
    char name[50];
    char salary[50];
    char id[50];
};


int main(){
    char a[50], b[50], c[50];
    float d;
    printf("Enter the name, department, roll and cgpa:\n");
    scanf("%s %s %s %f", &a, &b, &c, &d);
    struct student s1;
    strcpy(s1.name, a);
    strcpy(s1.department, b);
    strcpy(s1.roll, c);
    s1.cgpa=d;
    printf("The details of students are:\nName: %s\nDepartment: %s\nRoll. No.: %s\nCGPA: %.2f\n", s1.name,s1.department,s1.roll, s1.cgpa);
    return 0;
}