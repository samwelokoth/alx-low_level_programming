#include <stdio.h>

/**
 * main -Entry point of the program
 *
 * Description : This program  prints the lowercase alphabets
 * Followed by the uppercase alphabets
 * Author : samwelokoth8@gmail.com
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
		putchar('\n');
	return (0);
}
