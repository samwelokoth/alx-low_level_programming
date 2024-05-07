/* 4-strpbrk.c */
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input string
 * @accept: input set of characters
 * Return: Address of the first occurrence in s of any character from accept, or NULL if none of the characters are found.
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return (NULL);
}
