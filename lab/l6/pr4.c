//To input the value of three resistances in series in circuit of given voltage and calculate the current

#include <stdio.h>
int main ()
{
    int R1, R2, R3, Req, V = 9, I;
    printf ("Enter the value of three resistances\n");
    scanf ("%d, %d, %d", &R1, &R2, &R3);
    Req = R1 + R2 + R3;
    I = V / Req;
    printf ("Current flowing through the circuit is %d\n", I);
    return 0;
}