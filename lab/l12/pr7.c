//Too print the pattern :- A
//                         B C
//                         D E F
//                         G H I J 
#include <stdio.h>
int main ()
{
    int i, j, n;
    char ch = 'A';
    printf ("Enter the no of rows\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i ++)
    {
        for (j = 1; j <= i; j ++)
        {
            printf ("%c", ch);
            ch = ch + 1;
        }
        printf ("\n");
    }
    return 0;
}