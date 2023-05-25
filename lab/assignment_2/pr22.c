
#include <stdio.h>
void main ()
{
    int n, i;
    int a[100];
    int *ptr;
    ptr = &a[0];
    printf ("Enter the size of array : ");
    scanf ("%d", &n);
    printf ("Enter %d elements in the array : \n", n);
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &a[i]);
        
    }
    ptr = &a[0];
    printf ("In reverse order :");
    for (i = n-1; i >= 0; i --)
    {
        printf ("Element %d is %d : ", i, *(ptr + i));
        // ptr --;
    }
}