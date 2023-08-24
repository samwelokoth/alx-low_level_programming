#include "main.h"
/*

main - Write a function that compares two strings
return : string compared
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')/* Line ambiguous*/
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
