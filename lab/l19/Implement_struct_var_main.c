//To implement stuctures declaring structure variable within main()
//Name - Soumya Banerjee

#include <stdio.h>

struct EmpDatabase
{
  int id;
  int age;
  int salary;
};

int main ()
{
  struct EmpDatabase emp;
  emp.id = 1234;
  emp.age = 22;
  emp.salary = 523410;
  printf ("Employee ID :- %d ", emp.id);
  printf ("\nEmployee Age :- %d ", emp.age);
  printf ("\nEmployee Salary :- %d ", emp.salary);
  return 0;
}