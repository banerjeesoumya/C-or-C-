//Calculate hcf 

#include <stdio.h>
int gcd (int, int);
int main ()
{
    int m, n, hcf;
    printf ("Enter the two numbers \n");
    scanf ("%d, %d", &m, &n);
    hcf = gcd (m, n);
    printf ("The HCF of %d and %d is %d", m, n, hcf);
}

//Calculating

int gcd (int p, int q)
{
    if (q == 0)
        return p;
    else
        return gcd (q, p % q);
}