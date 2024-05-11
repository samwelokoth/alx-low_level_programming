#include <stdio.h>
/**
* positive_or_negative - prints the sign of a number
* @n: the number to check
*/
void positive_or_negative(int n)
{
if ((n % 10) > 5)
printf("greater than 5\n");
else if ((n % 10) == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
}
