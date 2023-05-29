// wap to show nested structure
//Name - Soumya Banerjee

#include <stdio.h>
#include <string.h>
int main()
{
    struct address 
    {
         char phone[15];
         char city[25];
         int pin;
    };
    struct emp 
    {
        char name[25];
        struct address a;
    };
    struct emp e={"Jeeru","250010","Nagpur",10};
    printf("Name = %s , phone = %s\n", e.name,e.a.phone);
    printf("City = %s , pin = %d\n", e.a.city,e.a.pin);

return 0;
}