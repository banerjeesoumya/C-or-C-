#include <stdio.h>
int main ()
{
    int a, area;
    printf("Enter the side of the square\n");
    scanf ("%d", &a);
    area = (a * a);
    printf ("The area of the square is :- %d", area);
    return 0;
}