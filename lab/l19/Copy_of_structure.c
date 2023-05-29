//To implement copying of structures
//Name - Soumya Banerjee

#include <stdio.h>
struct employee
{
    char grade;
    int basic;
    float allowance;
};  

int main ()
{
    struct employee ramesh = {'b', 6500, 812.5};
    struct employee vivek;
    
    //copying the struct
    
    vivek = ramesh; 

    printf ("\n Vivek's grade is %c, basic is Rs %d, allowance is Rs %f", vivek.grade, vivek.basic, vivek.allowance);
    return 0;
}
