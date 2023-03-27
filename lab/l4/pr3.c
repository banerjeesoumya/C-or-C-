//To convert the entered time (in seconds) to hours, minutes and seconds
#include <stdio.h>
int main ()
{
    int s1, hr, min, s2, t;
    printf ("Enter the time in seconds\n");
    scanf ("%d", &s1);
    hr = s1 / 3600;
    t  = s1 % 3600;
    min = t / 60;
    s2 = t % 60;
    printf ("After the conversion :-\n");
    printf ("Hours = %d, Minutes = %d, Seconds = %d\n", hr, min, s2);
    return 0;
}