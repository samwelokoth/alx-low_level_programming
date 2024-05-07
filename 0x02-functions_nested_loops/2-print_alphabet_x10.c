#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 * Return: 0
 * Parameters: None
 */

void print_alphabet_x10(void)
{
int num, letter;
for (num = 0; num <= 9; num++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}
