//To print odd numbers upto a given range

#include <stdio.h>
int main ()
{
    int start, end, i;
    printf ("Enter the starting and ending value\n");
    scanf ("%d, %d", &start, &end);
    for (i = start;  i <= end; i ++)
    {
        if ((i % 2) != 0)
            printf ("%d\n", i);
    }
    return 0;
}