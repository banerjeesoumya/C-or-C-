//To implement sum of natural numbers

#include <stdio.h>
int sum (int);
int main ()
{
    int n, s;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    s = sum (n);
    printf ("The sum of natural numbers upto %d is %d", n, s);
}

//calculating the sum

int sum (int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum (n - 1);
}