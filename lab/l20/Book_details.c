//Printing book details
//Name - Soumya Banerjee

#include <stdio.h>
struct Book
{
    char bname [20];
    int pages;
    char author [20];
    float price;
};

void main ()
{
    int i;
    struct Book b1[3] = 
    {
        {"Let us C", 700, "YPK", 300.00},
        {"Wings of Fire", 500, "APJ Abdul Kalam", 350.00},
        {"Complete C", 1200, "Herbt Schildt", 450.00} 
    };
    printf ("\n The book details are below : \n");
    for (i = 0; i < 3; i ++)
    {
        printf ("\nBook Number : %d\n", i + 1);
        printf ("\nBook Name : %s\n", b1[i].bname);
        printf ("\nPages : %d\n", b1[i].pages);
        printf ("\nAuthor : %s\n", b1[i].author);
        printf ("\nPrice : %f\n", b1[i].price);
    }
    return 0;
}
