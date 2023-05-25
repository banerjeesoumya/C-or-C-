//To implement structure  operations

#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[25];
    char gender;
    float marks;
};
int main()
{
    int n,i;
    struct student s[100];
    printf("enter no. of students");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter student %d details\n ",i+1);
        printf("roll no \n");
        scanf("%s",&s[i].name);
        printf("gender \n");
        scanf("%c",&s[i].gender);
        printf("marks \n");
        scanf("%f",s[i].marks);
    }
    printf("The student details are \n");
    printf("\n sl.no \troll no. \tname \tgender \tmarks\n");
    printf("\n          \t             \t          \t             \t           \n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d\t\t%s\t%c\t%f  \n",i+1,s[i].roll,s[i].name,s[i].gender,s[i].marks);
    }
    return 0;
}