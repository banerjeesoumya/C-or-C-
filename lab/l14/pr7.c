//Implementing string manipulation

#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[20];
    char s2[20];
    int ret;
    strcpy (s1, "abcdef");
    strcpy (s2, "ABCDEF");
    ret = strcmp(s1, s2);
    if (ret < 0)
    {
        printf ("s1 is less than s2 \n");
    }
    else if (ret > 0)
    {
        printf ("s2 is less than s1 \n");
    }
    else
    {
        printf ("s2 is equal to s1 \n");
    }
    return 0;
}
    