#include<stdio.h>
int main()
{
    int Y;
    printf("Enter year ");
    scanf("%d",&Y);
    if(Y%4==0)
    { 
        if(Y%100==0)
       { 
         if(Y%400==0)
          printf("The year is a leap year");
         else 
          printf("The year is not a leap year");
        }
        else
         printf("The year is a leap year");
        return 0;
    }
    else
    {
        printf("the year is not a leap year");
    }
    return 0;
     
}