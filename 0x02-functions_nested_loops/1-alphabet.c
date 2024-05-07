#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                putchar(c);
                c++;
        }
        putchar('\n');
}

int main(void)
{
        print_alphabet();
        return (0);
}
