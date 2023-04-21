//Binary Search

#include <stdio.h>
int main ()
{
    int n, i, start, end , mid, pos = -99, sn;
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
    start = 0;
    end = (n - 1);
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == sn)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] > sn)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (pos > 0)
    {
        printf ("Search succesfull and element found at %d", pos + 1);
    }
    else
    {
        printf ("Element not found \n");
    }
    return 0;
}