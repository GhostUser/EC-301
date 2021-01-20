/*
Q26. Write a C program to generate the following pattern
      *
    * * *
  * * * * *
* * * * * * *

*/

#include <stdio.h>

int main(){
  int n;
  printf("Enter the number of lines: ");
  scanf("%d",&n);
  for (int i=1; i<=n; i++){
      for (int j=n-1;j>=i;j--){
        printf(" ");
      }
      for (int k=1; k<=i; k++){
        printf("*");
      }
      for (int l=i-1; l>0; l--){
        printf("*");
      }
    printf("\n");
  }
}

/*
if (i!=1){
        for (int l=1; l<=i; l++){
        printf("*");
        }
      }
*/