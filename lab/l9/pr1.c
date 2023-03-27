#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, c, d, r1, r2;
    printf ("Enter the coefficients\n");
    scanf ("%d, %d, %d", &a, &b, &c);
    d = ((pow(b,2)) - 4 * a * c);
    r1 = ((-b + sqrt(d)) / 2 * a);
    r2 = ((-b - sqrt(d)) / 2 * a); 
    if (d >= 0)
    {
        printf ("Roots are real\n");
        if (d == 0)
            printf ("Roots are equal\n");
        else
            printf ("Roots are distinct\n");
    }
    else
    {
        printf ("Roots are imaginary\n");      
    }
}