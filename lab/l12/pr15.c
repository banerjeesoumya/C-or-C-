//Too print the pattern :-  * * * *  
//                            * * *
//                              * *  
//                                *

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        for (int space = 1; space < i; space ++ )
        {
            printf (" ");
        }
        for (int j = (n - i + 1); j > 0; j --)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}