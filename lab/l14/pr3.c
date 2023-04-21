//Linear Search

#include <stdio.h>
int main ()
{
    int n, i, pos = -99, sn;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr [n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the element to be searched \n");
    scanf ("%d", &sn);
    for (i = 0; i < n; i ++)
    {
        if (arr[i] == sn)
        {
            pos = i;
        }
    }
    if (pos > 0)
    {
        printf ("Search succesfull and element found at position %d", (pos + 1));
    }
    else
    {
        printf ("Element not present in array \n");
    }
    return 0;
}