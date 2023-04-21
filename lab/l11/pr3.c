//To print the sum of digits using for loop

#include <stdio.h>
int main ()
{
    int n, r, s = 0;
    printf ("Enter the number\n");
    scanf ("%d", &n);
    for (;n > 0; n = n / 10)
    {
        r = n % 10;
        s = s + r;
    }
    printf ("Sum of the digits is :- %d \n", s);
    return 0;
}