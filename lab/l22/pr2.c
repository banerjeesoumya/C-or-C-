#include <stdio.h>

enum days{ sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main()
{
    enum days start,end;
    start = tuesday;
    end= saturday;
    
    printf("\n start = %d, end = %d ",start,end);
    start=64;
    printf("\n start now is  = %d",start);
    return 0;
}