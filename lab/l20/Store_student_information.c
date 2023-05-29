//To store student information
//Name - Soumya Banerjee

#include <stdio.h>
#include <string.h>
struct Student
{
    char name [100];
    int roll;
    char gender;
    float marks;
};

int main ()
{
    int n, i;
    printf ("Enter the numbers of students \n");
    scanf ("%d", &n);
    struct Student s1 [n];
    for (i = 0; i < n; i ++)
    {
        printf ("\nEnter student %d data\n", i + 1);
        printf ("\nName : ");
        scanf (" %[^\n]", s1[i].name);
        printf ("\nRoll Number : ");
        scanf ("%d",&s1[i].roll);
        printf ("\nGender : ");
        scanf (" %c", &s1[i].gender);
        printf ("\nMarks : ");
        scanf ("%f", &s1[i].marks);
    }

    printf ("The student details are : \n");
    printf ("\nSl.No\tName\tRoll Number\tGender\tMarks\n");
    printf ("\n====\t======\t====\t\t=====\t=====\n");
    for (i = 0; i < n; i ++)
    {
        printf ("\n%d\t%s\t%d\t%c\t%f", i + 1, s1[i].name, s1[i].roll, s1[i].gender, s1[i].marks);
    }
    return 0;
}
