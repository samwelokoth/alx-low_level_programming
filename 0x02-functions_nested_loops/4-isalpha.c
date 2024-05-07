#include <stdio.h>

/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to be checked
 * Return: 1 if character is alphabetic, otherwise 0
 */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
        else
                return (0);
}

int main(void)
{
        int c = 'a';
        if (_isalpha(c))
                printf("%c is alphabetic\n", c);
        else
                printf("%c is not alphabetic\n", c);

        return (0);
}
