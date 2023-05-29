//To add two distances (in inches and feet)
//Name - Soumya Banerjee

#include <stdio.h>
struct dist
{
    int feet;
    float inch;
};

int main ()
{
    struct dist d1, d2, d;
    printf ("Enter the data for 1st distance \n");
    printf ("\nEnter feet : ");
    scanf ("%d", &d1.feet);
    printf ("\nEnter inches : ");
    scanf ("%f", &d1.inch);
    printf ("Enter data for 2nd distance \n");
    printf ("\nEnter feet :");
    scanf ("%d", &d2.feet);
    printf ("\nEnter inches : ");
    scanf ("%f", &d2.inch);
    d.feet = d1.feet + d2.feet;
    d.inch = d1.inch + d2.inch;

    if (d.inch )
    {
        d.inch = d.inch - 12.00;
        ++d.feet; 
    }
    printf ("\nSum of distances = %d - %.1f", d.feet, d.inch);
    return 0;
}