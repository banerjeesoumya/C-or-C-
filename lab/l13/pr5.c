//To print the sum of even elements and odd elements

#include <stdio.h>
int main ()
{
    int n, i, e_sum = 0, o_sum = 0;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    for (i = 0; i < n; i ++)
    {
        printf ("Enter the array elements \n");
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < n; i ++)
    {
        if ((arr[i] % 2) == 0)
        {
            e_sum = e_sum + arr[i];
        }
        else
        {
            o_sum = o_sum + arr[i];
        }
    }
    printf ("Sum of the even elements of the array is %d and odd elements is %d", e_sum, o_sum);
}