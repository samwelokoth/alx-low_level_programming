#include <stdio.h>

/**
 * Main -Entry part of the program
 * @brief- write a program that prints the alphabet
 * followed by a new line
 */

int main(void)
{

/*
 *main -prints the alphabets
 *Return : Always 0 (success)
 * you can only use putchar
 * All your code should be in the main function
 * you can only use putchar twice in your code
*/
char letter;
for (letter  = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
