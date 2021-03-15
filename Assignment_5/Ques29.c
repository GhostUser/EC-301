// Binary Search in C

#include <stdio.h>

int main(){
  int arr[10]={2,4,5,6,10,14,16,17,27,29};
  int n, s, low, high, mid;
  s=10;//number of elements
  n=17;//number to be searched
  low=0;
  high=s-1;
  while (low<=high){
    mid=(low+high)/2;
    if (arr[mid]==n){
      printf("%d is the found at index %d", n, mid);
      break;
    }
    if (arr[mid]>n)
      high=mid-1;
    else
      low=mid+1;
  }
  if (low>high)
    printf("not found");
}