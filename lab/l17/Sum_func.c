//To implement sum using functions
//Name - Soumya Banerjee

#include <stdio.h>
void sum1 ();
void sum2 (int, int);
int sum3 (void);
int sum4 (int, int);
int main ()
{
    int a, b, c = 0, d = 0, ch;
    printf ("1. Function without return type without parameter\n ");
    printf ("2. Function without return type  with parameter\n ");
    printf ("3. Function with return-type without parameter\n ");
    printf ("4. Function with return with parameter\n");
    printf ("Enter your choice \n");
    scanf ("%d", &ch);
    switch (ch)
    {
        case 1:
            printf ("Calling sum1() \n");
            sum1();
            break;
        case 2:
            printf ("Calling sum2() \n");
            printf ("Enter the value of a and b \n");
            scanf ("%d, %d", &a, &b);
            sum2 (a, b);            
            break;
        case 3:
            printf ("Calling sum3() \n");
            c = sum3();
            printf ("Sum = %d \n", c);
            break;
        case 4:
            printf ("Calling sum4() \n");
            printf ("Enter the value of a and b \n");
            scanf ("%d, %d", &a, &b);
            d = sum4 (a, b);
            printf ("Sum = %d \n", d);
            break;
        default:
            printf ("Invalid Choice \n");
            break;
    }
    
}
void sum1 ()
{
    int a, b;
    printf ("Enter the value of a and b \n");
    scanf ("%d, %d", &a, &b);
    printf ("Sum = %d \n", (a + b));
}
void sum2 (int m, int n)
{
    printf ("%d \n", (m + n)); 
}
int sum3 ()
{
    int a, b, c;
    printf ("Enter the value of a and b \n");
    scanf ("%d, %d", &a, &b);
    c = a + b;
    return c;
}
int sum4 (int m, int n)
{
    return m + n;
}