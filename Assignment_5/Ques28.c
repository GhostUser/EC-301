#include <stdio.h>

int main(){
    int n, size;
    int bo=1;
    printf("Enter the element to be found and size of array: ");
    scanf("%d %d", &n, &size);
    int arr[size];
    for (int i=1; i<=size; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=1; i<=size; i++){
        if(arr[i]==n){
            printf("The index of %d is %d", n, i);
            bo=0;
            break;
        }
    }
    if(bo){
        printf("Element not found!");
    }
}