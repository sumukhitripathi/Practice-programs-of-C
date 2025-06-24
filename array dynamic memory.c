// Array declaration static and dynamic for reference
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,j,k, row1,col1, row2, col2;
    int arr1[10][20];
    int *arr2;

    // Get the size of arrays
    printf("\nEnter the number of rows of array1: ");
    scanf("%d", &row1);
    printf("\nEnter the number of columns of array1: ");
    scanf("%d", &col1);

    printf("\nEnter the number of rows of array2: ");
    scanf("%d", &row2);
    printf("\nEnter the number of columns of array2: ");
    scanf("%d", &col2);

    //allocate memory dynamically for the array2
    arr2 = (int *)malloc(row2 * col2 * sizeof(int));

    // get the data for the arrays
 printf("\nEnter the data of array1: ");
    for(i=0;i<row1;i++)
    {
        for (j=0;j<col1;j++)
        {
            printf("Enter the value of array1[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);

        }
    }
 printf("\nEnter the data of array2: ");

    for(i=0;i<row2;i++)
    {
        for (j=0;j<col2;j++)
        {
            printf("Enter the value of array2[%d][%d]: ",i,j);
            scanf("%d", &arr2[i * col2 + j]); // row major

        }
    }

    // print the data for the arrays
            printf("\nThe arr1 elements are:\n ");

    for(i=0;i<row1;i++)
    {
        for (j=0;j<col1;j++)
        {
            printf("%d ", arr1[i][j]);
        }
         printf("\n");
    }
           printf("\nThe arr2 elements are:\n ");

    for(i=0;i<row2;i++)
    {
        for (j=0;j<col2;j++)
        {
            printf("%d ",arr2[i*col2 +j]);
        }
         printf("\n");
    }

  // Free allocated memory
    free(arr2);

    return 0;

}