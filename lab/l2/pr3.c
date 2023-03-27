#include<stdio.h>
int main ()
{
    int a, b;
    printf ("Enter the two numbers\n");
    scanf ("%d, %d", &a, &b);
    printf ("Sum = %d\n", (a + b));
    printf ("Difference = %d\n", (a - b));
    printf ("Multiplication = %d\n", (a * b));
    printf ("Division = %f\n", (float)(a / b));
    return 0;
}
