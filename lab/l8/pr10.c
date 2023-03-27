// To find if the roots of the quadratic equantion is real or imaginary

#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, c, d;
    printf ("Enter the coefficients\n");
    scanf ("%d, %d, %d", &a, &b, &c);
    d = (b * b) - 4 * a * c;
    if (d >= 0)
    {
        printf ("Roots are real\n");
        if (d == 0)
        {
            printf ("Roots are equal\n");
        }
        else
        {
            printf ("Roots are distinct");
        }
    }
    else
    {
        printf ("Roots are imaginary\n");
    }
}