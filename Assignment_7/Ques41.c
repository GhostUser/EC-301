/*
Q41. Write a program using array of structure to read and display information (name, salary, ID) read and display information 
(name, salary, ID) about N employee.
*/
#include <stdio.h>

struct employees
{
    /* data */
    char name[50];
    char salary[50];
    char id[50];
};

int main(){
    struct employees e1, e2, e3, e4;
    printf("Enter the Employee Name, Salary, ID:\n");
    scanf("%s %s %s", &e1.name, &e1.salary, &e1.id);
    scanf("%s %s %s", &e2.name, &e2.salary, &e2.id);
    scanf("%s %s %s", &e3.name, &e3.salary, &e3.id);
    scanf("%s %s %s", &e4.name, &e4.salary, &e4.id);
    printf("The Employee information is:\n");
    printf("Name: %s Salary: %s ID: %s\n", e1.name, e1.salary, e1.id);
    printf("Name: %s Salary: %s ID: %s\n", e2.name, e2.salary, e2.id);
    printf("Name: %s Salary: %s ID: %s\n", e3.name, e3.salary, e3.id);
    printf("Name: %s Salary: %s ID: %s\n", e4.name, e4.salary, e4.id);
    return 0;
}