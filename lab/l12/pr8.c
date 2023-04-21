//To print the pattern :-        1
//                             1 2 1
//                           1 2 3 2 1
//                         1 2 3 4 3 2 1

#include <stdio.h>
int main ()
{
    int i, j, space, k, n;
    printf ("Enter the no of rows\n");
    scanf ("%d", n);
    for (i = 1; i <= n; i ++)
    {
        for (space = 1; space = (n - i); space ++)
        {
            printf (" ");
        }
        for (j = 1; j <= i; j ++)
        {
            printf ("%d", j);
        }
        for (int k = (i - 1); k > 0; k --)
        {
            printf("%d", k);
        }
        printf ("\n");
    }
    return 0;
}