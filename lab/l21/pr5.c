//To implement a pattern
//Name - Soumya Banerjee

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    int i, j;
    for (i = 0; i < n; i++) 
    {
        if (i % 2 == 0) 
        { // even row
            for (j = 0; j < n; j++) 
            {
                if (j <= i) 
                {
                   printf("%c", 'a' + j - i + n - 1);
                }
                else 
                {
                   printf(" ");
                }
            }
        } 
        else 
        { // odd row
           for (j = 0; j < n; j++) 
           {
                if (j <= i) 
                {
                   printf("%c", 'a' + i - j);
                }
                else 
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}