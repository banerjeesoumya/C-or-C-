//To find the maximum of two numbers
//Name - Soumya Banerjee

#include <stdio.h>
int max (int , int);
int main ()
{
    int a, b;
    printf ("Enter the value of a and b \n");
    scanf ("%d, %d", &a, &b);
    int res = max(a, b);
    printf ("Maximum is among %d and %d is %d",a, b, res);
}

int max (int m, int n)
{
    int result;
    if (m > n)
        result = m;
    if (n > m)
        result = n;
    return result;
}