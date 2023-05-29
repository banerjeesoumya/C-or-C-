//To print factorial of the numbers
//Name - Soumya Banerjee

#include <stdio.h>
int fact (int);
int main ()
{
    int n, f;
    printf ("Enter the number \n");
    scanf ("%d", &n);
    f = fact (n);
    printf ("The factorial of the number %d is %d", n, f);
}

int fact (int n)
{
    int fac = 1;
    if ((n == 0) || (n == 1))
        return fac;
    else
    {
        for (int i = 1; i <= n; i ++)
            fac = fac * i;
        return fac;
    }
    
}