//To convert metres to it's equivalent kilometers and meters

#include <stdio.h>
int main ()
{
    int m1, m2, km;
    printf ("Enter the distance covered in meters\n");
    scanf ("%d", &m1);
    km = m1 / 1000;
    m2 = m1 % 1000;
    printf ("Equivalent conversion is %d kilometers and %d meters\n", km, m2);
    return 0;
}