// To find the shortes of two sides

#include <stdio.h>
#include <math.h>
int main ()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float ab, cd;
    printf ("Enter the first coordinate\n");
    scanf ("%d, %d", &x1, &y1);
    printf ("Enter the second coordinate\n");
    scanf ("%d, %d", &x2, &y2);
    printf ("Enter the third coordinate\n");
    scanf ("%d, %d", &x3, &y3);
    printf ("Enter the fourth coordinate\n");
    scanf ("%d, %d", &x4, &y4);
    ab = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cd = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
    if (ab > cd)
    {
        printf ("The side ab is the longest");
    }
    else
    {
        printf ("The side cd is the longest");
    }
    return 0;
}