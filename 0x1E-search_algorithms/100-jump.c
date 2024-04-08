#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int step = sqrt(size);
    int prev = 0;

    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    while (array[min(step, size) - 1] < value)
    {
        prev = step;
        step += sqrt(size);

        if (prev >= (int)size)
            return -1;

        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    for (int i = prev; i < min(step, (int)size); i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}

/**
 * min - Returns the minimum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Minimum of a and b
 */
int min(int a, int b)
{
    return (a < b) ? a : b;
}

