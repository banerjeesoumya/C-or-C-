// wap in c to check usage of pointer
//Name - Soumya Banerjee

#include <stdio.h>
int main() 
{
    int i=3;
    int *j=&i;
    printf("Address of i=%u\n",&i);
    printf("Address 0f i=%u\n\n",j);
    printf("Address of j=%u\n",&j);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    printf("Value of i=%d\n",*j);
    return 0;
}