#include<main.h>
/**
 * write a function that prints a string in reverse
 * 
*/



void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

_putchar(s);
