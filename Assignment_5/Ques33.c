#include <stdio.h>

int main(){
    char str[1000], res[1000], temp;
    int size,i=0,j, bol=1;
    printf("Enter the size of the string: ");
    scanf("%d", &size);
    printf("Enter the string: ");
    scanf("%s", &str);
    j=size-1;
    while (i<j){
        if (str[i]==str[j]){
            bol=1;
            i++;
            j--;
        }else{
            bol=0;
            break;
        }
    } 
    if (bol==1){
        printf("True");  
    }else{
        printf("False");
    }
}