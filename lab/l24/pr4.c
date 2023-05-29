//check whether the input is upper or not
//Name - Soumya Banerjee

#include <stdio.h> 
#include <ctype.h> 
int main() 
{ char var1; 
printf("Enter a character to check");
 scanf("%c",&var1);
if( isupper(var1) ) 
{
	 printf("var1 = |%c| is uppercase character\n", var1 ); 
} 
else 
{ 
	printf("var1 = |%c| is not uppercase character\n", var1 );
} 
return 0;
}