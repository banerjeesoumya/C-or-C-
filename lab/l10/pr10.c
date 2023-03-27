#include <stdio.h>
int main ()
{
    int a = 10;
    while (a < 20)
    {
        printf ("Value of a: %d\n", a);
        a = a + 1;
        if (a > 15)
        {
            break;
        }
    }
    return 0;
}