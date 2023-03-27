#include <stdio.h>
int main ()
{
    int l, b, area;
    //float area;
    printf("Enter the length of the rectangle\n");
    scanf ("%d", &l);
    printf ("Enter the breadth of the rectangle\n");
    scanf ("%d", &b);
    area = (l * b);
    printf ("The area of the rectangle is :- %d", area);
    return 0;
}