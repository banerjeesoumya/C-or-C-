//To find the minimum of the three inputted number

#include <stdio.h>
int main ()
{
    int a, b, c;
    printf ("Enter the three numbers\n");
    scanf ("%d, %d, %d", &a, &b, &c);
    printf ("Minimum of the three numbers is %d\n", ((a < b) && (a < c)) ? a : ((b < c) && (b < a)) ? b : c);
    return 0;
}