//To implement the size of operators

#include <stdio.h>
int main ()
{
    printf ("char size = %d bytes\n", sizeof(char));
    printf ("short size = %d bytes\n", sizeof(short));
    printf ("int size = %d bytes\n", sizeof(int));
    printf ("long size = %d bytes\n", sizeof(long));
    printf ("float size = %d bytes\n", sizeof(float));
    printf ("double size = %d bytes\n", sizeof(double));
    printf ("1.55 size = %d bytes\n", sizeof(1.55));
    printf ("1.55L size = %d bytes\n", sizeof(1.55L));
    printf ("HELLO size = %d bytes\n", sizeof("HELLO"));
    return 0;
}
