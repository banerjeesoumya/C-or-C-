#include <stdio.h>
int main ()
{
    int i, s1 = 0, p;
    for (i = 0; i <= 10; i ++)
    {
        p = 8 * i;
        s1 = s1 + p;
    }
    //s1 = s1 + p;
    printf ("Result = %d", s1);
}