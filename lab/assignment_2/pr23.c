#include <stdio.h>
#include <string.h>
void main()
{
	char str[100];
	char *s;
	//s=&str[100];
	s=str;
	int len,i;
		printf("\nENTER A STRING: ");
	gets(s);
	len=strlen(s);
	printf("\nTHE REVERSE OF THE STRING IS:");
	for(i=len;i>=0;i--)
	{
		printf("%c",*(s+i));
	}
}
