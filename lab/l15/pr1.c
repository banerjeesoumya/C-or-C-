//To assign array elements in a 2-D Array

#include <stdio.h>
int main ()
{
    int i, j;
    int arr[5][2] = {{0.0}, {1,2}, {2, 4}, {3, 6}, {4, 8}};
    for (i = 0; i < 5; i ++)
    {
        for (j = 0; j < 2; j ++)
        {
            printf ("a[%d][%d] = %d \n", i, j, arr[i][j]);
        }
    }
    return 0;
}