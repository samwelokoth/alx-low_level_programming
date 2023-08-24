#include <stdio.h>
#include "main.h"

/**
*@brief  write a program that concatenates two strings 
*using the prototype char *_strcat(char *dest, char *src);
*function appends the src string to the dest string 
*return : A pointer to the resulting string;
*/

char *_strcat(char *dest, char *src){

int a, b;
a=0; 
b=0;

while  (dest[a] != '\0')
a++;

while (src[b] != '\0')
{

dest[a] = src[b


];
a++;
b++;
}

dest[a]= '\0';
return(dest);
}



