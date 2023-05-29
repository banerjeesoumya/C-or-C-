//To print leading and trailing diagonal elements of an array
//Name - Soumya Banerjee

#include <stdio.h>
int main ()
{
    int i, j, l_sum = 0,  r_sum = 0, m, n;
    printf ("Enter the no:of rows and the no:of columns of the array \n");
    scanf ("%d, %d", &m, &n);
    int s = (m - 1);
    if (m == n)
    {
        int A[m][n];
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
        printf ("Leading elements are :- ");
        for (i = 0; i < m; i ++)
        {
            //l_sum = 0;
            for (j = 0; j < n; j ++)
            {
                if (i == j)
                {
                    printf ("%d ", A[i][j]);
                    l_sum = l_sum + A[i][j];
                }
            }
        }
        printf ("\nTracking elements are :- ");
        for (i = 0; i < m; i ++)
        {
            //r_sum = 0;
            for (j = 0; j < n; j ++)
            {
                if ((i + j) == s)
                {
                    printf ("%d ", A[i][j]);
                    r_sum = r_sum + A[i][j];
                }
            }
        }
        printf ("\nSum of leading elements are :- %d", l_sum);
        printf ("\nSum of tracking elements are :- %d", r_sum);
    }
    else
    {
        printf ("Wrong dimension, only square matrix \n");
    }
}