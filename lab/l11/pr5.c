//To check if the entered number is prime

#include <stdio.h>
int main ()
{
    int n, i, c = 0;
    printf ("Enter the number\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i ++)
    {
        if ((n % i) == 0)
        {
            c ++;
        }
    }
    if (c == 2)
    {
        printf ("The entered number is prime\n");
    }
    else
    {
        printf ("The entered number is not prime\n");
    }
    return 0;
}