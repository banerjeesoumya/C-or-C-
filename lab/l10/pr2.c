#include <stdio.h>
int main ()
{
    int i = 100;
    do
    {
        printf ("%d \t", i);
        i = i + 1;
    } 
    while (i <= 110);
    return 0;
}