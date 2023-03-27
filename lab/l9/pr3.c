#include <stdio.h>
int main ()
{
    int score, tm;
    printf ("Enter the score of the student\n");
    scanf ("%d", &score);
    tm = score / 10;
    switch (tm)
    {
        case 9:
            printf ("Grade  - O\n");
            break;
        case 8:
            printf ("Grade  - E\n");
            break;
        case 7:
            printf ("Grade  - A\n");
            break;
        case 6:
            printf ("Grade  - B\n");
            break;
        case 5:
            printf ("Grade  - C\n");
            break;
        case 4:
            printf ("Grade  - D\n");
            break;
        default:
            printf ("Grade - F\n");
            break;
    }
    return 0;
}