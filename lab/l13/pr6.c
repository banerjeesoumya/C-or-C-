#include <stdio.h>
int main ()
{
    int n, i, j, c = 0, t;
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
        t = arr[i];
        c = 0;
        for (j = 1; j <= t; j ++)
        {
            if (t % j == 0)
                c ++;
        }
        if (c == 2)
        {
            printf ("%d is a prime number \n", t);
        }
    }
    return 0;
}