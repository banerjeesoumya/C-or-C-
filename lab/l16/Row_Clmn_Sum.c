//To implement rowise sum and columnwise sum
//Name - Soumya Banerjee
#include <stdio.h>
int main ()
{
    int i, j, row_sum = 0, clmn_sum = 0, m, n;
    printf ("Enter the no:of rows and the no:of columns of the array \n");
    scanf ("%d, %d", &m, &n);
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
    for (i = 0; i < m; i ++)
    {
        row_sum = 0;
        for (j = 0; j < n; j ++)
        {
            row_sum = row_sum + A[i][j];
        }
        printf ("Row-wise Sum of %dth row = %d \n",(i + 1), row_sum);
    }    
    printf ("\n");
    for (i = 0; i < m; i ++)
    {
        clmn_sum = 0;
        for (j = 0; j < n; j ++)
        {
            clmn_sum = clmn_sum + A[j][i];
        }
        printf ("Column-wise Sum of %dth column = %d\n",(i + 1), clmn_sum);
    }
    return 0;
}