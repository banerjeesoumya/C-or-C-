//To implement Transpose of a Matrix

#include <stdio.h>
int main ()
{
    int m, n, i, j;
    printf ("Enter the no:of rows\n");
    scanf ("%d", &m);
    printf ("Enter the no:of columns \n");
    scanf ("%d", &n);
    int A[m][n];
    int B[m][n];
    printf ("Enter the elements of matrix A[][] \n");
    for (i = 0; i < m; i ++)
    {
        for (j = 0; j < n; j ++)
        {
            scanf ("%d", &A[i][j]);
        }
    }
    //Transposing
    for (i = 0; i < m; i ++)
    {
        for (j = 0; j < n; j ++)
        {
            B[j][i] = A[i][j];
        }
    }
    printf ("Transpose of A[][] matrix is B[][] \n");
    for (i = 0; i < m; i ++)
    {
        for (j = 0; j < n; j ++)
        {
            printf ("%d \t", B[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
