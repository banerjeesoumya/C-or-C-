#include <stdio.h>
int main ()
{
    float p, r, t, si;
    printf ("Enter the principal amount\n");
    scanf ("%f", &p);
    printf ("Enter the rate of interest\n");
    scanf ("%f", &r);
    printf ("Enter the time\n");
    scanf ("%f", &t);
    si = (p*r*t)/100;
    printf ("Simple Interest = %f\n", si);
    return 0;
}