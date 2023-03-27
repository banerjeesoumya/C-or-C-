//To implement the use of operators

#include <stdio.h>
int main ()
{
    int a = 5, b = 20, c = 10;
    a = ++b;
    b = c + a;
    c = --a;
    printf ("%d\t", a);
    printf ("%d\t", c);
    printf ("%d\t", b);
    return 0;
}