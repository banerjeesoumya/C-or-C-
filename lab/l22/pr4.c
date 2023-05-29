// To implement enum
//Name - Soumya Banerjee

#include <stdio.h>
enum suit 
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() 
{
    card = club;
    printf("Size of enum variable = %ld bytes", sizeof(card));	
    return 0;
}