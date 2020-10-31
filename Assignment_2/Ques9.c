/*
9. Program to implement age calculator.
*/

#include <stdio.h>

int main(){
    int cy,cm,cd,by,bm,bd,ay,am,ad;
    printf("Enter current date, month and year: ");
    scanf("%d %d %d", &cd,&cm, &cy);
    printf("Enter your date, month and year of birth: ");
    scanf("%d %d %d", &bd,&bm, &by);
    if (cy<by){
        printf("Invalid!");
        return 0;
    }else{
        if (cd<bd){
            cm=cm-1;
            cd=cd+30;
        }
        if (cm<bm){
            cy=cy-1;
            cm=cm+12;
        }
    }
    ad=cd-bd;
    am=cm-bm;
    ay=cy-by;
    printf("The age is %d years, %d months and %d days.", ay, am, ad);
}