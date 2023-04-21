//To print the sum of all natural numbers

#include <stdio.h>
int main ()
{
    int n;
    long sum = 0;
    printf ("Enter the value of n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        sum = sum + i;
    }
    printf ("Sum = %d", sum);
    return 0;
}