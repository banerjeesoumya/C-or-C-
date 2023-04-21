//Selection Sort

#include <stdio.h>
int main ()
{
    int n, i, j, s, pos = -1, t;
    printf ("Enter the array limit \n");
    scanf ("%d", &n);
    int arr[n];
    for (i = 0; i < n; i ++)
    {
        printf ("Enter the array elements \n");
        scanf ("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        s = arr[i];
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (s > arr[i])
            {
                s = arr[j];
                pos = j;
            }
        }
        t = arr[i];
        arr[i] = arr[pos];
        arr[pos] = t;
    }
    printf ("After sorting \n");
    for (i = 0; i < n; i ++)
    {
        printf ("%d \n", arr[i]);
    }
    return 0;
}