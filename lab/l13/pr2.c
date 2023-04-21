#include <stdio.h>
int main ()
{
    int n, i;
    printf ("Enter the value of n");
    scanf ("%d", &n);
    int arr[n];
    for (i = 0; i < n; i ++)
    {
        printf ("Enter the array elements \n");
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < n; i ++)
    {
        printf ("Value of arr[%d] is %d \n", i, arr[i]);
    }
    return 0;
}