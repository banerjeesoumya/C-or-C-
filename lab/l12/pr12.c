//To print the pattern :-        1
//                             1   1
//                           1   2   1
//                         1   3   3   1

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= (n - i); j ++)
        {
            printf ("  ");
        }
        int C = 1;
        for (int k = 1; k <= i; k ++)
        {
            printf ("%d   ", C);
            C = C * (i - k) / k;
        }
        printf ("\n");
    }
    return 0;
}