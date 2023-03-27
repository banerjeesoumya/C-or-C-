#include <stdio.h>
int main ()
{
    char ch;
    printf  ("Enter the character\n");
    scanf ("%c", &ch);
    switch (ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'u':
            printf ("Vowel");
            break;
        default:
            printf ("It is a consonant\n");
            break;
    }
    return 0;
}