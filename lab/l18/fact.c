//Factorial of a number using recursion
#include <stdio.h>
int main ()
{
    int n, f;
    printf ("Enter the number \n");
    scanf ("%d", &n);
    f = (int)fact(n);
    printf ("Factorial of %d is %d", n, f);
}

//calculating factorial

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}