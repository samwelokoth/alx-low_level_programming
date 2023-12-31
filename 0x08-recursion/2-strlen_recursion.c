
#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lengthh= 0;

	if (*s)
	{
		lengthh++;
		lengthh += _strlen_recursion(s + 1);
	}

	return (lengthh);
}

