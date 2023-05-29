//To implement Linear Search using function
//Name - Soumya Banerjee

#include <stdio.h>
int search (int A[], int, int);
int main ()
{
    int n, i, pos = -1, sn;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the number to be searched \n");
    scanf ("%d", &sn);
    pos = search (arr, n, sn);
    if (pos > 0)
    {
        printf ("Search succesfull and element found at position %d", (pos + 1));
    }
    else
    {
        printf ("Element not present in array \n");
    }
}

int search (int A[], int n, int sn)
{
    int i;
    for (i = 0; i < n; i ++)
    {
        if (A[i] == sn)
            return i;
    }
    return -1;
}