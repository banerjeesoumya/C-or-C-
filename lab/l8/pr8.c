//To check the maximum among 6 numbers

#include <stdio.h>
int main ()
{
    int a, b, c, d, e, f, max;
    printf ("Enter the 6 numbers\n");
    scanf ("%d, %d, %d, %d, %d ,%d", &a, &b, &c, &d, &e, &f);
    if ((a > b) && (a > c) && (a > d) && (a > e) && (a > f))
    {
        max = a;
    }
    else if ((b > a) && (b > c) && (b > d) && (b > e) && (b > f))
    {
        max = b;
    }
    else if ((c > a) && (c > b) && (c > d) && (c > e) && (c > f))
    {
        max = c;
    }
    else if ((d > a) && (d > b) && (d > c) && (d > e) && (d > f))
    {
        max = d;
    }
    else if ((e > a) && (e > b) && (e > c) && (e > d) && (e > f))
    {
        max = e;
    }
    else
    {
        max = f;
    }
    printf ("The maximum number is :- %d", max);
    return 0;
}