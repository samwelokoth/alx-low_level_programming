/* 3-strspn.c */
#include "main.h"
/**
 * _strspn - Entry point
 * @s: input string
 * @accept: input set of characters
 * Return: The number of characters in the initial substring of s that only contain characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
