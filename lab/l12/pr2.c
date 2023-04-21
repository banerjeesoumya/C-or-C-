//To print the table of n (User input)

#include <stdio.h>
int main ()
{
    int i, j, n;
    printf ("Enter the value of n \n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i ++)
    {
        for (j = 1 ; j <= 10; j ++)
        {
            printf ("%d * %d = %d \t", i, j, (j * i));
        }
        printf ("\n");
    }
    return 0;
}