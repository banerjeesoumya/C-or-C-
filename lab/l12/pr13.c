//Too print the pattern :- A
//                         A B
//                         A B C
//                         A B C D

#include <stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j ++)
        {
            printf ("%c", ch);
            ch ++;
        }
        printf ("\n");
    }
    return 0;
}