//To check if the input is an alphabet or a digit or a special character

#include <stdio.h>
int main ()
{
    char ch;
    printf ("Enter the value\n");
    scanf ("%c", &ch);
    (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z'))) ? printf ("The entred value is a character\n") : ((ch >= '0') && (ch <= '9')) ? printf ("The entered value is a digit\n") : printf ("The entered value is a special character\n");
    return 0;
}