#include <stdio.h>
int main ()
{
    char s [100];
    char *ptr;
    int nov;
    printf ("\nEnter the string: ");
    gets (s);
    ptr = s;
    nov  = 0;
    while (*ptr != '\0')
    {
        if ((*ptr == 'A') || (*ptr == 'E') || (*ptr == 'I') || (*ptr == 'O') || (*ptr == 'U') || (*ptr == 'a') || (*ptr == 'e') || (*ptr == 'i') || (*ptr == 'o') || (*ptr == 'u'))
        nov ++;
        ptr  ++;
    }
    printf ("\nTotal number of VOWELS: %d", nov);
    return 0;
}