//To implement sum of digits of the number
//Name - Soumya Banerjee

#include <stdio.h>
int dig (int);
int main ()
{
    int n, s;
    printf ("Enter the number \n");
    scanf ("%d", &n);
    s = dig (n);
    printf ("The sum of the digits of the entered number %d is %d", n, s);
}

int dig (int n)
{
    int d, t, s = 0;
    t = n;
    while (t > 0)
    {
        d = t % 10;
        t = t / 10;
        s = s + d;
    }
    return s;
}