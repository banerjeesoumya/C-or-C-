//To check if a candidate is eligible to vote or not

#include <stdio.h>
int main ()
{
    int age;
    printf ("Enter the age of the candidate\n");
    scanf ("%d", &age);
    if (age >= 18)
    {
        printf ("Eligible for voting\n");
    }
    else
    {
        printf ("Not eligible for voting\n");
    }
    return 0;
}