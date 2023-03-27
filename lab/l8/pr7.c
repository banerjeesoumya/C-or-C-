//To input three coordinates and check if it's a triangle or not

#include <stdio.h>
#include <math.h>
int main ()
{
    int x1, y1, x2, y2, x3, y3;
    float ab, bc, ac;
    printf ("Enter the first coordinate\n");
    scanf ("%d, %d", &x1, &y1);
    printf ("Enter the second coordinate\n");
    scanf ("%d, %d", &x2, &y2);
    printf ("Enter the third coordinate\n");
    scanf ("%d, %d", &x3, &y3);
    ab = sqrt(pow((x2 - x1), 2) + pow ((y2 - y1), 2));
    bc = sqrt(pow((x3 - x2), 2) + pow ((y3 - y2), 2));
    ac = sqrt(pow((x3 - x1), 2) + pow ((y3 - y1), 2));
    if ((ab + bc) > ac)
    {
        printf ("It is a triangle\n");
    }
    else
    {
        printf ("It is not a triangle\n");
    }
    return 0;
}