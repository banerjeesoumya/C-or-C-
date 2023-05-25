#include <stdio.h>
int main ()
{
    int n, t, d, s = 0, c = 0;
    printf ("Enter the number\n");
    scanf ("%d", &n);
    t = n;
    while (t > 0)
    {
        d = t % 10;
        t = t / 10;
        s = s + d;
        c ++;
    }
    printf ("Sum of the digits of the number %d = %d and the number of digits in it = %d\n", n, s, c);
    return 0;
}