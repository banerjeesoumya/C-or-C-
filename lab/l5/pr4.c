//To implement the use of ternary operators

#include <stdio.h>
int main ()
{
    int a, b;
    printf ("Enter the value of a and b\n");
    scanf ("%d, %d", &a, &b);
    printf ("Minimum of two numbers :- %d \n", (a < b)? a : b);
    return 0;
}
