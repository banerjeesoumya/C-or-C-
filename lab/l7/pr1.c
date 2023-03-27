//To check if a given number is even or odd using ternary operator

#include <stdio.h>
int main ()
{
    int a = 21;
    ((a % 2) == 0) ? printf ("The given number is even") : printf ("The given number is odd");
    return 0;
}