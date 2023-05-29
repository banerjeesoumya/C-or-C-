//add dist inch-ft
//Name - Soumya Banerjee

#include <stdio.h>
struct D
{
    int ft;
    float in;
};

int main()
{
    struct D d1, d2, d;

    printf("\nEnter 1st dist.\n");
    printf("\nEnter ft: ");
    scanf("%d", &d1.ft);
    printf("\nEnter inch: ");
    scanf("%f", &d1.in);
    printf("\nEnter 2nd dist.\n");
    printf("\nEnter ft: ");
    scanf("%d", &d2.ft);
    printf("\nEnter inch: ");
    scanf("%f", &d2.in);

    d.ft = d1.ft + d2.ft;
    d.in = d1.in + d2.in;


    if (d.in>12)
    {
        d.in = d.in-12;
        ++d.ft;
    }

    printf("\nSum = %d ft %f inch", d.ft, d.in);
    return 0;
}