//To check if the user input is a positive, negative number or it's a zero

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the number\n");
    scanf("%d", &n);
    ((n > 0)) ? printf ("The entered number is positive\n") : ((n < 0)) ? printf ("The entered number is negative") : printf ("The entered number is zero\n");
    return 0;
}