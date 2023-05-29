//To print sub matrix
//Name - Soumya Banerjee
#include <stdio.h>

int main() 
{
    int n, i, j, num = 1;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];

    for(i = 0; i < n / 2; i++) 
    {
        for(j = i; j < n - i; j++) 
        {
            matrix[i][j] = num++;
        }
        for(j = i + 1; j < n - i; j++) 
        {
            matrix[j][n - i - 1] = num++;
        }
        for(j = n - i - 2; j >= i; j--) 
        {
            matrix[n - i - 1][j] = num++;
        }
        for(j = n - i - 2; j > i; j--) 
        {
            matrix[j][i] = num++;
        }
    }

    if(n % 2 != 0) 
    {
        matrix[n/2][n/2] = num;
    }

    printf("\nThe matrix is:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Divide matrix into sub-square matrices
    int sub_order = 2;
    for (i = 0; i < n; i += sub_order) 
    {
        for (j = 0; j < n; j += sub_order) 
        {
            printf("Sub-square matrix starting at (%d,%d):\n", i, j);
            int sub_matrix[sub_order][sub_order];
            int k, l;
            for (k = i; k < i + sub_order; k++) 
            {
                for (l = j; l < j + sub_order; l++) 
                {
                    sub_matrix[k-i][l-j] = matrix[k][l];
                }
            }
            for (k = 0; k < sub_order; k++) 
            {
                for (l = 0; l < sub_order; l++) 
                {
                    printf("%d\t", sub_matrix[k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}