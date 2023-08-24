#include "main.h"
/*
*write a function that reverses the content of an array of integers
*Where n is the number of elements in the array
*/

void reverse_array(int *a, int n)
int swap, begin, end;
{
	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
