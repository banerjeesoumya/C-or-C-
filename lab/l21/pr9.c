// boat details

#include<stdio.h>
struct bt
{
    char n[20];
    int st;
    float f;
};
int main()
{
    struct bt b[3]=
    {
        {"khi",1,15.10},
        {"hi",2,15.10},
        {"mi",3,20.01}
    };
    printf("Boat Ticket\n");
    printf("Name  Seat No. Fare\n");
    for(int i=0;i<3;i++)
    {
        printf("%s    %d    %f\n",b[i].n,b[i].st,b[i].f);
    }
    return 0;
 }