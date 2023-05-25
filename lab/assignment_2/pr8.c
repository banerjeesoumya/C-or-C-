//To implement binary search using function
//Name - Soumya Banerjee

#include <stdio.h>
int bin_search (int A[], int, int);
int main ()
{
    int n, i, start, end, mid, pos, sn;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the element to be searched \n");
    scanf ("%d", &sn);
    //start = 0;
    //end = n - 1;
    pos = bin_search (arr, n, sn);
    if (pos > 0)
    {
        printf ("Search succesfull and element found at %d", pos + 1);
    }
    else
    {
        printf ("Element not found \n");
    }
}

int bin_search (int A[], int n, int sn)
{
    int start, end, mid;
    start = 0;
    end = (n - 1);
    while (start <= end)
    {
        mid  = (start + end) / 2;
        if (A[mid] == sn)
        {
            return mid;
            break;
        }
        else if (A[mid] > sn)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}