#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabets
 *              in reverse order from 'z' to 'a', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_letter;

	for (lowercase_letter = 'z'; lowercase_letter >= 'a'; lowercase_letter--)
		putchar(lowercase_letter);

	putchar('\n');
	return (0);
}

