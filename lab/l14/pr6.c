//Implementing string manipulation

#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[20];
    char s2[20];

    strcpy(s1, "Finally");
    strcpy(s2, "Mid-sem is over");
    puts ("String copied to s1 :-");
    puts (s1);
    puts ("String copied to s2 :-");
    puts (s2);
    return 0;
}