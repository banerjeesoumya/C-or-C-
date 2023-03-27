#include <stdio.h>
int main ()
{
    int a, b, c, sum;
    float avg;
    printf ("Enter the three numbers \n");
    scanf ("%d,%d,%d", &a,&b,&c );
    sum = a + b + c;
    avg = sum / 3;
    printf ("Sum = %d\n", sum);
    printf ("Average = %f\n", avg);
}