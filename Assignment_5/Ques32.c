#include <stdio.h>

int main(){
    char str[1000], temp;
    int size,i=0,j;
    printf("Enter the size of the string: ");
    scanf("%d", &size);
    printf("Enter the string: ");
    scanf("%s", &str);
    j=size-1;
    while (i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("\nReversed string: %s", str);
    return 0;
}