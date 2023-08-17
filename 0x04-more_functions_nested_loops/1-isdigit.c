#include <stdio.h>
#include "main.h"

/**
 * @Brief : write  a function that checks for a digit (0 through 9)
 * Return 1 if c is a digit
 * Return 0 otherwise
 */

int _isdigit(int c)
{

	if ( c >= 0 && c <= 10)
	{return (1);
	}

	else 
	{
		return (0);
	}
}
