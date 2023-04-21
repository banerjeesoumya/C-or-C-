//Too print the pattern :-       A  
//                             B B
//                           C C C  
//                         D D D D


#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        char ch = 'A';
        for (int space = 1; space <= (n - i); space ++)
        {
            printf (" ");
        }
        for (int j = 1; j <= i; j ++)
        {
            printf ("%c", ch + i - 1);
        }
        printf ("\n");
    }
    return 0;
}