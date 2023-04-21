//To print the sum of square of natural number 

#include <stdio.h>
#include <math.h>
int main ()
{
    int n;
    long sum = 0;
    printf ("Enter n \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        sum = sum + (pow(i, 2));
    }
    printf ("Sum of square of natural numbers is :- %d", sum);
    return 0;
}