// wap in c 
//Name - Soumya Banerjee

#include <stdio.h>
int main() 
{
    int a[]={10,20,30,40,50};
    int *p;
    p=a;
    for(int i=0;i<5;i++) 
    {
        printf("\n %d",p[i]);
    }
    return 0;
}