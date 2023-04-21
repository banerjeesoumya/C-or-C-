//Too print the pattern :- 1
//                         2 1
//                         1 2 3
//                         4 3 2 1
//                         1 2 3 4 5

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j > 0; j --)
            {
                printf ("%d", j);
            }
        }
        else
        {
            for (int k = 1; k <= i; k ++)
            {
                printf ("%d", k);
            }
        }
        printf ("\n");
    }
    return 0;
}