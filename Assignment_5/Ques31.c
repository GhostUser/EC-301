#include <stdio.h>

int main(){
    char str[200];
    int res;
    scanf("%s", &str);
    for(int i=0; str[i]!='\0'; ++i){
       res=i;
    }
    printf("The length of string is %d",res+1);
    return 0;
}