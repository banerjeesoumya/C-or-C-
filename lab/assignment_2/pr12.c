// transpose 
#include <stdio.h>

int main() {
   int r,c;

   printf("Enter the number of rows and columns of the matrix: ");
   scanf("%d %d", &r, &c);

   int matrix[r][c], transpose[c][r];

   printf("Enter the elements of the matrix:\n");
   for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   printf("Original matrix:\n");
   for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
         printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }

   // Transpose the matrix
   for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
         transpose[j][i] = matrix[i][j];
      }
   }

   printf("Transpose of matrix:\n");
   for (int i = 0; i < c; i++) {
      for (int j = 0; j < r; j++) {
         printf("%d ", transpose[i][j]);
      }
      printf("\n");
   }

   return 0;
}