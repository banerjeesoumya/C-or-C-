#include <stdio.h>
int main ()
{
    int i = 30;
    do
    {
        printf ("%d \t", i);
        i = i + 2;
    } 
    while (i <= 50);
    return 0;
}