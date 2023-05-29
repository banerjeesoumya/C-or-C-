//To implement structures by storing books details
//Name - Soumya Banerjee

#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    int book_id;
}Book1, Book2;

int main ()
{
    strcpy (Book1.title, "C - Programming");
    Book1.book_id = 6495407;

    strcpy (Book2.title, "Telecom Billing");
    Book2.book_id = 6495700;

    printf ("Book 1 title :- %s \n", Book1.title);
    printf ("Book 1 ID - %d \n", Book1.book_id);

    printf ("Book 2 title :- %s \n", Book2.title);
    printf ("Book 2 ID - %d \n", Book2.book_id);
    return 0;
}
