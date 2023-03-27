//To check if the input is alphabet and print if it is an lowercase or uppercase

#include <stdio.h>
int main ()
{
    char ch;
    printf ("Enter the character\n");
    scanf ("%c", &ch);
    ((ch >= 'A') && (ch <= 'Z')) ? printf ("It is an alphabet and it is in Uppercase") : ((ch >= 'a') && (ch <= 'z')) ? printf ("It  is an alphabet and it is in lowercase") : printf ("It is not an alphabet");
    return 0;
}