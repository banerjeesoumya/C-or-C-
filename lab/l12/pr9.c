//To print the pattern :- 1
//                        0 1
//                        1 0 1
//                        0 1 0 1

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n :\n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= i; j ++)
        {
            if  ((i + j) % 2 != 0)
            {
                printf ("0");
            }
            else
            {
                printf ("1");
            }
        }
        printf ("\n");
    }
    return 0;
}