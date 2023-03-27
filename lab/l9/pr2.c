#include <stdio.h>
int main ()
{
    char ch;
    printf ("Enter the character\n");
    scanf ("%c", &ch);
    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
        {
            printf ("It is a Vowel\n");
        }
        else
        {
            printf ("It is a consonant\n");
        }
    }
    else
    {
        printf ("Invalid Entry\n");
    }
    return 0;
}