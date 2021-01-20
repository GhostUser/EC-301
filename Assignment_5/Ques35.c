#include <stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the no. rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    int arr1[r][c],arr2[r][c],res[r][c];
    printf("Enter the values to the first matrix: ");
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values to the second matrix: ");
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            res[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
