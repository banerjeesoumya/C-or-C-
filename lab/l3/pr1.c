#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c, d, x1, x2;
    printf ("Enter the value of a, b and c\n");
    scanf ("%f, %f, %f", &a, &b, &c);
    d = (sqrt)((b*b) - 4*a*c);
    printf ("Discriminant = %f\n", d);
    x1 = (-b + d)/(2 * a);
    x2 = (-b - d)/(2 * a);
    printf ("x1 = %f and x2 = %f ", x1 , x2);
    return 0;
}