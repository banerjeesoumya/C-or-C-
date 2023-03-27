// To input two numbers and find out the maximum number

#include <stdio.h>
int main ()
{
    int a, b;
    printf ("Enter the two numbers\n");
    scanf ("%d, %d", &a, &b);
    printf("Maximum number is %d\n", (a > b) ? a : b);
    return 0;
}