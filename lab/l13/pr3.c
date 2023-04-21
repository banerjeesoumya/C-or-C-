#include <stdio.h>
int main ()
{
    int n, i, sum = 0;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < n; i ++)
    {
        sum = sum + arr[i];
    }
    printf ("Sum of the elements of the array is :- %d", sum);
}