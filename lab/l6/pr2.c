// To implement the use of logical and increment operator

#include <stdio.h>
int main ()
{
    int a = 5, b = 20, c = 10;
    a = b && c;
    b = c ++;
    c = a || b;
    printf ("%d\t", a);
    printf ("%d\t", c);
    printf ("%d\t", b);
    return 0;
}