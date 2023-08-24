#include<stdio.h>
#include "main.h"

/*
 *  main- Write a function that concatenates two strings.

   * Prototype: char *_strncat(char *dest, char *src, int n);
   *The _strncat function is similar to the _strcat function, except that
   it will use at most n bytes from src; and
   src does not need to be null-terminated if it contains n or more bytes
   * Return : a pointer to the resulting string dest
*/


char *_strncat(char *dest, char *src, int n)
{

int a; 
int b;
a=0;
b=0;
{
while (a[dest] != '\0' );
a++;


	while (b[src]!= '\0' && b<n);
	b++;
	a++;
}

dest[a] = '\0';
return(dest);

}