#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("\nEnter term number :");
    scanf("%d",&n);
    printf ("\n The value of %dth term in the Fibonacci series is %d", n, fib(n));
    return 0;
}
/*Recursive version
 of the 
Fibonacci function to 
compute the ith term*/

int fib(int i)
{
    if(i==0 || i==1)
        return (i);
    else
        return (fib(i-1)+ fib(i-2));
}
