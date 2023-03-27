#include <stdio.h>
int main ()
{
    int n, check;
    printf ("Enter the number\n");
    scanf ("%d", &n);
    check = n % 2;
    switch (check)
    {
        case 0:
            printf ("The number is even\n");
            break;
        case 1:
            printf ("Wrong input\n");
            break;
        default:
            printf ("Wrong input\n");
            break;
    }
    return 0;
}