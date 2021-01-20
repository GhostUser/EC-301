#include <stdio.h>

int main(){
    int r1,c1,r2,c2,i,j,k,temp=0;
    printf("Enter the no. rows and columns of the second matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the no. rows and columns of the first matrix: ");
    scanf("%d %d", &r2, &c2);
    int arr1[100][100],arr2[100][100],res[100][100];
    if (c1!=r2){
        printf("The matrix are incompatible to multipy!\n");
        return 0;
    }else{
        printf("The matices are compatible.\n");
    }
    printf("Enter the values to the first matrix: ");
    for (i=0; i<r1; i++){
        for (j=0; j<c1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values to the second matrix: ");
    for (i=0; i<r2; i++){
        for (j=0; j<c2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    //multiplication
    for (i=0; i<r1; i++){
        for (j=0; j<r2; j++){
            for (k=0; j<c2; k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for (i=0; i<r1; i++){
        for (j=0; j<r2; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}