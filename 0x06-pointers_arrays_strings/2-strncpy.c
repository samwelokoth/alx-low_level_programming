#include <stdio.h>
#include "main.h"

/*main -Entry point to the program
Write a program that copies a string 
the Program should work exactly like the strcpy
strncpy used to copy strings 
*/

char *_strncpy(char *dest, char *src, int n)


{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

