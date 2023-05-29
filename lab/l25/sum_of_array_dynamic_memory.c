//To print sum of array elements using dynamic memory location
#include <stdio.h>
#include<stdlib.h>
int main ()
{
    int n, *a, i, s = 0;
    printf ("Enter the number of elements : ");
    scanf ("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf ("No memory available \n");
        exit(0);
    }
    printf ("Enter the array elements one by one \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &a[i]);
        s = s + a[i];
    }
    printf ("Sum is :- %d", s);
    return 0;
}