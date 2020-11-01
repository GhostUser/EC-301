/*
Q18. Program to create a menu
Press 1 for addition
Press 2 for subtraction
Press 3 for division
Press 4 for multiplication
Press 5 to exit.
The program must take two numbers if the choice is
not 5 (exit), and display the result accordingly.
The program must exit only on pressing 5.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    printf("Press the following digits: \n1- Addition \n2-Subtraction \n3- Multiplication \n4- Diviion \n5- Exit\n");
    int n;
    bool run=true;
    while (run){
        scanf("%d", &n);
        if (n!=5){
            float a, b;
            printf("Enter two numbers:\n");
            scanf("%f %f", &a, &b);
            switch (n){
                case 1:
                    printf("\nThe sum is: %f\n",a+b);
                    break;
                case 2:
                    printf("\nThe difference is: %f\n",a-b);
                    break;
                case 3:
                    printf("\nThe product is: %f\n",a*b);
                    break;
                case 4:
                    printf("\nThe division is: %f\n",a/b);
                    break;
            }
        }else{
            printf("\nExit succesful.");
            run=false;
            break; 
        } 
    }
}