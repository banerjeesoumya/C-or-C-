//Bubble Sort

#include <stdio.h>
int main ()
{
    int n, i, j, t;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }
    //Sorting
    for (i = 0; i < (n - 1); i ++)
    {
        for (j = 0; j < (n - 1- i); j ++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf ("After sorting :- \n");
    for (i = 0; i < n; i ++)
    {
        printf ("%d \n", arr[i]);
    }
}