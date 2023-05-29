//To implement structures

#include <stdio.h>

struct EmpDataBase
{
    int id;
    int age;
    float salary;
}emp, employee;

int main ()
{
    employee.id = 1234;
    employee.age = 22;
    employee.salary = 523410;
    printf ("Employee ID :- %d ", emp.id);
    printf ("\nEmployee Age :- %d ", emp.age);
    printf ("\nEmployee Salary :- %d ", emp.salary);
    return 0;
}