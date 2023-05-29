//To count digits in a number

#include <stdio.h>
int count (int);
int cnt = 0;
int main ()
{
    int n, c;
    printf ("Enter the value of a \n");
    scanf ("%d", &n);
    c = count (n);
    printf ("The no:of digits in %d is %d \n", n, c);
}

int count (int n)
{
    if (n > 0)
    {
        cnt = cnt + 1;
        count (n / 10);
    }
    return cnt;
}