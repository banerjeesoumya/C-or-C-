//To print the fibonacci series

#include <stdio.h>
int main ()
{
    int a = 0, b = 1, c, n, i;
    printf ("Enter the limit of the series\n");
    scanf ("%d", &n);
    for (i = 0; i <= n; i ++)
    {
        if (i <= 1)
            c = i;
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf ("%d, \t", c);
    }
    return 0;
}