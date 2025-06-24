//multiply matrix static memory allocation

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[30][30], b[30][30], sum[30][30], prod[30][30], r, c, n;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &r);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &c);
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &r);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &c);
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
    }

    if(c!=r){
        printf("Matrices cannot be multiplied.");
    }
    else{
        for (int i=0; i<r; i++){
            for (int j=0; j<c; j++){
                prod[i][j]=0;
                for (int k=0; k<c; k++){
                    prod[i][j]=prod[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    }
    printf("The resultant matrix is: \n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", prod[i][j]);
        }
    }
    return 0;
}

