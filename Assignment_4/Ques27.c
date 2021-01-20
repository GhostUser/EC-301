/*
Q27. Write a C program to generate the following pattern
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

#include <stdio.h>

int main(){
  int n,i,j,k,l;
  printf("Enter the number of lines: ");
  scanf("%d",&n);
  for (int i=1; i<=n; i++){
    for(j=n-1; j>=i; j--){
      printf(" ");
    }
    for(k=1;k<=i;k++){
      printf("*");
    }
    for(l=i-1;l>0;l--){
      printf("*");
    }
    printf("\n");
  }
  for (i=n-1; i>=1;i--){
    for(j=n-1; j>=i; j--){
      printf(" ");
    }
    for(k=1;k<=i;k++){
      printf("*");
    }
    for(l=i-1;l>0;l--){
      printf("*");
    }
    printf("\n");
  }
}