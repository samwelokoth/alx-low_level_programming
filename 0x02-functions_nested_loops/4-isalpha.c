#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(void)
{
    int result = _isalpha('A');
    
    if (result)
    {
        printf("Character is alphabetic.\n");
    }
    else
    {
        printf("Character is not alphabetic.\n");
    }

    return 0;
}

