//To find the grade of the student 

#include <stdio.h>
int main ()
{
    int score;
    printf ("Enter the score of the student\n");
    scanf ("%d", &score);
    if (score >= 90)
    {
        printf ("Grade - A\n");
    }
    else if (score >= 80)
    {
        printf ("Grade - B\n");
    }
    else if (score >= 70)
    {
        printf ("Grade - C\n");
    }
    else if (score >= 60)
    {
        printf ("Grade - D\n");
    }
    else
    {
        printf ("Try next semester\n");
    }
    return 0;
}