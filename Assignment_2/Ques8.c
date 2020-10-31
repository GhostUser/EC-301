/*Program to check whether a given character is alphabet, digit or
special character.*/

#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c>='a')&&(c<='z')){
        printf("The character %c is an alphabet", c);
    }else if ((c>='0')&&(c<='9')){
        printf("The character %c is a digit", c);
    }else{
        printf("The character %c is special character", c);
    }
}