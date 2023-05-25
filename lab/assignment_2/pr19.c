//To implement swapping using pointers
//Name - Soumya Banerjee
#include <stdio.h>
void swap (int *, int *);
int main ()
{
    int a = 10, b = 20;
    printf ("Before swapping :- a = %d and b = %d \n", a, b);
    swap (&a, &b);
    printf ("Before swapping :- a = %d and b = %d \n", a, b);
}

void swap (int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}