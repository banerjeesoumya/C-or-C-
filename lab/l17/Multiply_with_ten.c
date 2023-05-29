//To multiply entered number with 10
//Name - Soumya Banerjee

#include <stdio.h>
int mul (int);
int main ()
{
    int n, pr;
    printf ("Enter the number \n");
    scanf ("%d", &n);
    pr = mul(n);
    printf ("The number %d after multiplying with 10 is %d ", n, pr);
}

int mul (int n)
{
    int p = n * 10;
    return p;
}