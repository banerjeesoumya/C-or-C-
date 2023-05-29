#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () 
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "LearningC -");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 35);
   strcat(str, "C is fun");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}
