/* 5-strstr.c */
#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input string
 * @needle: substring to search for
 * Return: Address of the first occurrence of needle in haystack, or NULL if needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}
return (NULL);
}
