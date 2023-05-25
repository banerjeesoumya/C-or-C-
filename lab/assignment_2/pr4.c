//To implement reverse of string without using library functions
//Name - Soumya Banerjee

#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int l, i;
   printf("\nEnter a string : ");
   scanf("%[^\n]s",s);
   l=strlen(s);
   printf("\nThe reverse of the string is ");
   for(i=l-1; i>=0; i--)
   {
      printf("%c",s[i]);
   }
   return 0;
}