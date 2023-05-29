//By using dynamic memeory allocation to store two numbers and add

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *x, *y, sum;
    x = (int *)malloc(sizeof(int));
    y = (int *)malloc(sizeof(int));
    printf ("Enter the two numbers : ");
    scanf ("%d, %d", x, y);
    sum = *x + *y;
    printf ("Sum of the elements is : %d", sum);
    return 0;
}