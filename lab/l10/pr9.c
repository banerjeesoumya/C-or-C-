#include <stdio.h>
int main ()
{
    int n, t, d, rev = 0;
    printf ("Enter the number\n");
    scanf ("%d", &n);
    t = n;
    while (t > 0)
    {
        d = t % 10;
        t = t / 10;
        rev = rev * 10 + d;
    }
    printf ("The reverse of the number is %d\n", rev);
    if (n == rev)
    {
        printf ("And yes it is a palindrome number\n");
    }
    else
    {
        printf ("But it is not a palindrome number\n");
    }
    return 0;
}