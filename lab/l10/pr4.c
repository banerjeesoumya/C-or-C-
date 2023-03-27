#include <stdio.h>
int main ()
{
    int i = 41;
    do
    {
        printf ("%d \t", i);
        i = i + 2; 
    } 
    while (i <= 60);
    return 0;
}