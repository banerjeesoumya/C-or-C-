//To convert the entered temperature (in Celcius) to Farenheit
#include <stdio.h>
int main ()
{
    float C, F;
    printf ("Enter the temperature in Celcius\n");
    scanf ("%f", &C);
    F = (1.8 * C) + 32;
    printf ("The temperature in Farenheit = %f\n" , F);
    return 0;
}