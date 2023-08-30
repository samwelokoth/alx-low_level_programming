#include<stdio.h>
/*
*Write a function that prints a string, followed by a new line.
*Prototype: void _puts_recursion(char *s);
*/

void _puts_recursion(char *s);
{

char *s;
if(*s == '\n')

{
_putchar('\n')
return 0;

}

_putchar(*s);
s++;
_puts_recursion(s);
}



