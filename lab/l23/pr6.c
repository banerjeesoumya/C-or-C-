// wap in c to check the sizes of different types of pointers
//Name - Soumya Banerjee

#include <stdio.h>
int main()
{
    int *p;
    float *q;
    double *r;
    char *s; // sizeof(char *)
    printf("\n the size of integer pointer is %d",sizeof(p));
    printf("\n the size of fl oat pointer is %d",sizeof(q));
    printf("\n the size of double pointer is %d",sizeof(r));
    printf("\n the size of character pointer is %d",sizeof(char *));
    return 0;
}