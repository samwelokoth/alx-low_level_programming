#include <stdio.h>

/**
 * _islower - Checks for lowercase alphabet
 * @c: Character to be checked
 * Return: 1 if character is lowercase, otherwise 0
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}

int main(void)
{
        int c = 'a';
        if (_islower(c))
                printf("%c is lowercase\n", c);
        else
                printf("%c is not lowercase\n", c);

        return (0);
}
