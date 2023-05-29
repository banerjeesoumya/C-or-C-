// wap in c to show pointer structure
//Name - Soumya Banerjee

#include <stdio.h>
int main()
{

struct data
{
	    char name[50];
	    int roll;
	    int marks;
}s1 = {"Pritesh",90,90};

struct data *p;
p = &s1;

printf("Roll Number : %d\n",(*p).roll);
printf("Marks of Student : %d",(*p).marks);

return 0;
}