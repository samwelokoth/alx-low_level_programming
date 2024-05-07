#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * @brief Prints the last digit of a random number.
 *
 * This program generates a random number and prints the last digit of that no.
 *
 * @return Always 0 (Success).
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
switch (n % 10)
{
case 0:
printf("Last digit of %d is 0\n", n);
break;
case 1:
case 2:
case 3:
case 4:
case 5:
printf("Last digit of %d is less than 6 and not 0\n", n);
break;
default:
printf("Last digit of %d is greater than 5\n", n);
break;
}
return (0);
}
