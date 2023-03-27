//To convert the entered amount in rupees
#include <stdio.h>
int main ()
{
    int p1, r;
    float p2;
    printf ("Enter the amount in paise\n");
    scanf("%d", &p1);
    r = p1/100;
    p2 = p1 % 100;
    printf ("The amount is %d rupees and %f paise\n", r, p2);
    return 0;
}