//To input the length of three sides of a triangle and print the perimeter and area pf that triangle

#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c, tot, s, area;
    printf ("Enter the three sides of triangle\n");
    scanf ("%f, %f, %f", &a, &b, &c);
    tot = a + b + c;
    s = tot / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf ("The perimeter of the triangle is :- %f\n", tot);
    printf ("The area of the triangle is :- %f\n", area);
    return 0;
}
