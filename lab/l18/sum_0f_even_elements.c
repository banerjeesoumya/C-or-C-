#include <stdio.h>

void sum_even(int a[], int n);

int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum_even(arr, n - 1);
    return 0;
}

void sum_even(int A[], int n)
{
    static int sum = 0;
    if (n >= 0)
    {
        if ((A[n] % 2) == 0)
            sum += A[n];
        sum_even(A, n - 1);
    }
    else
    {
        printf("Sum = %d \n", sum);
    }
}