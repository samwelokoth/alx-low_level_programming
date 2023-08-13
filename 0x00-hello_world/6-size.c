#include <stdio.h>

/**
*main  -prints  the  size  of various  types
*Return:0 if exited properly, non-zero otherwise
*/

int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));

printf("Size of a bool: %zu byte(s)\n", sizeof(bool));

printf("Size of a double: %d byte(s)\n", sizeof(double));

printf("Size of a int: %d byte(s)\n", sizeof(int));

printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));

printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);

}
