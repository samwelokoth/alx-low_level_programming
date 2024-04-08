#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    if (array[0] == value)
        return 0;

    size_t i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    size_t left = i / 2;
    size_t right = (i < size) ? i : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    return binary_search(array, left, right, value);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the search range
 * @right: Right index of the search range
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    while (left <= right)
    {
        size_t mid = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; /* Not found */
}

