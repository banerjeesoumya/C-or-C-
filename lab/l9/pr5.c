#include <stdio.h>
int main ()
{
    char opr;
    int a, b;
    printf ("Enter the first and the second number and the operator (+,-,*,/)\n");
    scanf ("%d, %d, %c", &a, &b, &opr);
    //printf ("Enter the operator (+,-,*,/)\n");
    //scanf ("%c", &opr);
    switch (opr)
    {
        case '+':
            printf ("Adding two numbers = %d\n", (a + b));
            break;
        case '-':
            printf ("Substracting two numbers = %d\n", (a - b));
            break;
        case '*':
            printf ("Multiplying two numbers = %d\n", (a * b));
            break;
        case '/':
            printf ("Dividing two numbers = %d\n", (a / b));
            break;
        default :
            printf ("Invalid input\n");
            break;
    }
    return 0;
}