#include <stdio.h>
int main ()
{
    int a, b, sum;
    printf ("Enter the first number\n");
    scanf ("%d", &a);
    printf ("Enter the second number\n");
    scanf ("%d", &b);
    sum = a + b;
    printf ("Sum = %d\n", sum);
    return 0;
}