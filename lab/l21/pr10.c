// wap in c to implement structures

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
    printf(" the book details are as  follows ");
    for(int i=0;i<3;i++)
   	{
   		printf("book number = %d\n ",i+1);
   		printf("book name = %s\n", b1[i].name );
   		printf("pages %d\n ",b1[i].pages);
   		printf("author = %s\n ", b1[i].author);
   		printf("price = %f\n",b1[i].price);
   	}
}