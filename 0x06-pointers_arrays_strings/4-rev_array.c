#include "main.h"
/*
*write a function that reverses the content of an array of integers
*Where n is the number of elements in the array
*/

void reverse_array(int *a, int n)
{

int i, j, tmp;
j = n - 1;

for (i = i < n / 2; i++)
{

tmp = a[i];
a[i] = a[j];
a[j--] = tmp;

}

}
