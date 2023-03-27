//To find the maximum using nested if

#include <stdio.h>
int main ()
{
    int a, b, c;
    printf ("Enter the three numbers\n");
    scanf ("%d, %d, %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf ("The maximum number is :- %d\n", a);
        }
        else
        {
            printf ("The maximum number is :- %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf ("The maximum number is :- %d\n", b);
        }
        else
        {
            printf ("The maximum number is :- %d\n", c);
        }
    }
}