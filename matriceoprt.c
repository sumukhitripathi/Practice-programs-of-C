#include <stdio.h>
int main() 
{
  int r, c, a[5][5], b[5][5], sum[5][5], diff[5][5], prod[5][5], i, j;
  printf("Enter the number of rows (between 1 and 5): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 5): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // subtracting two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      diff[i][j] = a[i][j] - b[i][j];
    }
  
  // multiplying two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      prod[i][j] = a[i][j] * b[i][j];
    }
  
  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) 
      {
        printf("\n\n");
      }
    }

  printf("\nDifference of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("%d   ", diff[i][j]);
      if (j == c - 1) 
      {
        printf("\n\n");
      }
    }

  printf("\nProduct of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("%d   ", prod[i][j]);
      if (j == c - 1) 
      {
        printf("\n\n");
      }
    }

  return 0;
}