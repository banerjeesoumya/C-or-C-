//To print string using pointer
#include <stdio.h>
int main ()
{
    char str [100];
    char *ptr;
    printf ("\nEnter the string : ");
    gets (str);
    ptr = str;
    printf ("Entered string is : ");
    while (*ptr != '\0')
    {
        printf ("%c", *ptr ++);
    }
    return 0;
}