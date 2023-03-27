//To check if a number is positive, negative or zero

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter a number\n");
    scanf ("%d", &n);
    if (n > 0)
    {
        printf ("The entered number is positive\n");
    }
    else if (n < 0)
    {
        printf ("The entered number is negative\n");
    }
    else
    {
        printf ("The entered number is zero\n");
    }
}