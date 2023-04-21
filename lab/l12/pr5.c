//To print the pattern (using do-while loop) :- 1
//                                              12
//                                              123
//                                              1234
//                                              12345

#include <stdio.h>
int main ()
{
    int i = 1, j;
    do
    {
        j = 1;
        do
        {
            printf ("%d", j);
            j ++;
        } 
        while (j <= i);
        printf ("\n");
        i ++;    
    } 
    while (i <= 5);
    return 0;
}