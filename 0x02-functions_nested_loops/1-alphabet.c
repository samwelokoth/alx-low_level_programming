#include "main.h"

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z') 
{
putchar (c);
c++;
if (c <= 'z') 
{
putchar (' ');
}
}
putchar ('\n');
}
