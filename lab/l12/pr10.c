//Too print the pattern :- A
//                         B A
//                         C B A
//                         D C B A

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n : \n");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i ++)
    {
        for (int j = i; j >= 1; j --)
        {
            printf ("%c", 'A' + j - 1);
        }
        printf ("\n");
    }
    return 0;
}