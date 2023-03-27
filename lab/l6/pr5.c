//To input the value of three resistances in parallel in circuit of given voltage and calculate the current

#include <stdio.h>
int main ()
{
    float R1, R2, R3, Req, V = 3, I;
    printf ("Enter the value of three resistances\n");
    scanf ("%f, %f, %f", &R1, &R2, &R3);
    Req = ((R1 * R2 * R3)/(R1 + R2 + R3));
    I = V / Req;
    printf ("Equivalent Resistance = %f\n", Req);
    printf ("Current flowing through the circuit is %f\n", I);
    return 0;
}