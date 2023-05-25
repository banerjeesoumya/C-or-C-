//To generate fibonacci series

#include <stdio.h>
int a = 0, b = 1, c = 0, limit;
void input(void);
void generate_series (void);
int fib_series (int);
void input()
{
    printf ("Enter the limit \n");
    scanf ("%d", &limit);
}
int fib_series (int n)
{
    if (n <= 1)
        return a;
    else if (n == 2)
        return b;
    else
        return ((fib_series(n - 1)) + (fib_series(n - 2)));
}
void generate_series ()
{
    printf ("The Fibonacci Series is :- \n");
    for (int i = 0; i < limit; i ++)
    {
        c = fib_series(i);
        printf ("%d \t", c);
    }
}
int main ()
{
    input();
    generate_series();
}
