#include <stdio.h>
int main ()
{
    int i = 1;
    while (i <= 10)
    {
        if ((i % 2) == 0)
        {
            printf ("%d \t", i);
        }
        i = i + 1;
    }
    return 0;
}