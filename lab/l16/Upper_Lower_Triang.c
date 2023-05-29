//To print upper triangular matrix and lower triangular matrix
//Name - Soumya Banerjee

#include <stdio.h>
int main ()
{
    int i, j, m, n;
    printf ("Enter the no:of rows and the no:of columns of the array \n");
    scanf ("%d, %d", &m, &n);
    if (m == n)
    {
        int A[m][n], L[m][n], U[m][n];
        printf ("Enter the array elements\n");
        for (i = 0; i < m; i ++)
        {
            for (j = 0; j < n; j ++)
            {
                scanf ("%d", &A[i][j]);
            }
        }
        printf ("\n");
        for (i = 0; i < m; i ++)
        {
            for (j = 0; j < n; j ++)
            {
                printf ("%d \t", A[i][j]);
            }
            printf ("\n");
        }
        printf ("\nUpper Triangular Matrix \n");
        for (i = 0; i < m; i ++)
        {
            for  (j = 0; j < n; j ++)
            {
                U[i][j] = A[i][j];
                if (i > j)
                {
                    U[i][j] = 0;
                }
                printf ("%d \t", U[i][j]);
            }
            printf ("\n");
        }
        printf ("\nLower Triangular Matrix \n");
        for (i = 0; i < m; i ++)
        {
            for (j = 0; j < n; j ++)
            {
                L[i][j] = A[i][j];
                if (j > i)
                {
                    L[i][j] = 0;
                }
                printf ("%d \t", L[i][j]);
            }
            printf ("\n");
        }
    }
    else
    {
        printf ("Wrong dimension, only square matrix \n");
    }
    return 0;
}