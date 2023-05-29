// wap in c 
//Name - Soumya Banerjee

#include <stdio.h>
int main() 
{
    int arr[5];
    printf("Enter array:");
    
    for(int i=0;i<5;i++) 
    {
        scanf("%d",arr+i);
    }
    printf("Entered array:");
    for(int i=0;i<5;i++) 
    {
        printf("\n %d",*(arr+i));
    }
    return 0;
}