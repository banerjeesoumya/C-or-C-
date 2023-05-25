// WAP IN C TO SORT A STUDENT's INFO based on marks
//Name - Soumya Banerjee

#include <stdio.h>
struct student
{
    int rollno;
    char name[80];
    int marks;
};
void enter(struct student list[], int s);
void display(struct student list[], int s);
void sort(struct student list[], int s);

int main()
{
    struct student data[20];
    int n;

    printf("Number of records : ");
    scanf("%d", &n);
    enter(data, n);

    printf("\nBefore sorting");
    display(data, n);

    sort(data, n);
    printf("\nAfter sorting");
    display(data, n);
    return 0;
}
void enter(struct student list[80], int s)
{
   
    for (int i = 0; i < s; i++)
    {
        printf("\n\nEnter data for Record #%d", i + 1);
        
        printf("\nEnter rollno : ");
        scanf("%d", &list[i].rollno);

        printf("Enter name : ");
        scanf("%s",list[i].name);

        printf("Enter marks : ");
        scanf("%d", &list[i].marks);
    } 
}

void display(struct student list[80], int s)
{
    
    
    printf("\n\nRollno\tName\tMarks\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].rollno, list[i].name, list[i].marks);
    } 
}
void sort(struct student list[80], int s)
{
  
    struct student temp;
    
    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < (s - 1-i); j++)
        {
            if (list[j].marks >list[j + 1].marks)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }
}