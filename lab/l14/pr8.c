//To implement string manipulation

#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[20];
    char s2[20];
    strcpy (s1, "Welcome");
    strcpy (s2, "ToPCclass");
    printf ("Returned String :- %s\n", strcat(s1, s2));
    printf ("Concatenated String :- %s\n", s1);
    return 0;
}