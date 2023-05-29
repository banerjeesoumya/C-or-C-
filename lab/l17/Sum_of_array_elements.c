//To print the sum of all integers in the array using function
//Name - Soumya Banerjee

#include <stdio.h>
int add (int A[], int);
int main ()
{
    int n, i, s;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the array elements \n");
    for (i = 0; i < n; i ++)
    {
        scanf ("%d", &arr[i]);
    }
    s = add (arr, n);
    printf ("The sum of all the elements in an array is %d \n", s);
}

int add (int A[], int n)
{
    int i, sum = 0;
    for ( i = 0; i < n; i ++)
    {
        sum = sum + A[i];
    }
    return sum;
}