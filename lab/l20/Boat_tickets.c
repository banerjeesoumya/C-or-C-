//To print tickets of boarders in a boat
//Name - Soumya Banerjee

#include <stdio.h>
#include <string.h>
struct Boat
{
    char name [20];
    int seatnum;
    float fare;
};

int main ()
{
    struct Boat b1 [2] = 
    {
        {"Vikram", 1, 15.50},
        {"Gouri", 2, 25.50}
    };
    printf ("Boarder Name \t Seat No. \t Fare \n");
    for (int i = 0; i < 2; i ++)
    {
        printf ("\n%s \t %d \t %f", b1[i].name, b1[i].seatnum, b1[i].fare);
    }
    return 0;
}
