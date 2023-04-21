//To implement string manipulation

#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[] = "Hello, World !";
    char s2[20];
    strcpy (s2, s1);
    puts ("After copy s2 becomes \n");
    puts (s2);
    return 0;
}