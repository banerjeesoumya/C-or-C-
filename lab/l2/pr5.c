#include <stdio.h>
int main ()
{
    int b, h;
    float area;
    printf("Enter the breadth of the triangle\n");
    scanf ("%d", &b);
    printf ("Enter the height of the triangle\n");
    scanf ("%d", &h);
    area = (b * h)/2;
    printf ("The area of the triangle is :- %f", area);
    return 0;
}