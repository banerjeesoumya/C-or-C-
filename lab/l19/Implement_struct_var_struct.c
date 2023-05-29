//To implement structures by declaring structure variable within structure construct
//Name - Soumya Banerjee

#include <stdio.h>

struct EmpDatabase
{
  int id;
  int age;
  int salary;
}emp;

int main ()
{
  emp.id = 1234;
  emp.age = 22;
  emp.salary = 523410;
  printf ("Employee ID :- %d ", emp.id);
  printf ("\nEmployee Age :- %d ", emp.age);
  printf ("\nEmployee Salary :- %d ", emp.salary);
  return 0;
}