//Too print the pattern :- 1
//                         2 3
//                         4 5 6
//                         7 8 9 10

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter n \n");
    scanf ("%d", &n);
    int num = 1;
    for (int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= i; j ++)
        {
            printf ("%d", num);
            num ++;
        }
        printf ("\n");
    }
    return 0;
}