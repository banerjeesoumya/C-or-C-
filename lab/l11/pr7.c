//To print the sum and average of 1st 10 natural numbers

#include <stdio.h>
int main ()
{
    int i, s = 0, avg;
    for (i = 1; i <= 10; i ++)
    {
        s = s + i;
    }
    avg = s / 10;
    printf ("The sum is :- %d", s);
    printf ("The average is :- %d", avg);
}