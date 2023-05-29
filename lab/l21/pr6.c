// wap to show array of structures in c 
//Name - Soumya Banerjee

#include<stdio.h>

struct Book
{
    char name[20];
    int pages;
    char author[20];
    float price; 
};

void main()
{
    struct Book b1[3] = 
    {
        {"Let us C",700,"YPK",300.00},
        {"Wings of Fire",500,"Abdul Kalam",350.00},
        {"Complete C",1200,"Herbt Schildt",450.00}
    };
    printf("name ");
}