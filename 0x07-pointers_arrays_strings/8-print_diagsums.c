/* 8-print_diagsums.c */
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input array
 * @size: size of the array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int y;

for (y = 0; y < size; y++)
{
sum1 += a[y * size + y];
}

for (y = size - 1; y >= 0; y--)
{
sum2 += a[y * size + (size - y - 1)];
}

printf("%d, %d\n", sum1, sum2);
}
