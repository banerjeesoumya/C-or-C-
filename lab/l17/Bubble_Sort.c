//To implement Bubble Sort using function
//Name - Soumya Banerjee

#include <stdio.h>
void sort (int A[], int);
int main ()
{
    int n, i;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }

    sort (arr, n);

    printf ("After sorting :- \n");
    for (i = 0; i < n; i ++)
    {
        printf ("%d \n", arr[i]);
    }
}

void sort (int A[], int n)
{
    int i, j, t;
    for (i = 0; i < (n - 1); i ++)
    {
        for (j = 0; j < (n - 1- i); j ++)
        {
            if (A[j] > A[j + 1])
            {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
}