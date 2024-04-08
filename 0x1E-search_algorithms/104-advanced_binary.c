#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                    using the Advanced Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value in the array,
 *         or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    return binary_search_recursive(array, 0, size - 1, value);
}

/**
 * binary_search_recursive - Recursively searches for a value in a sorted array
 *                           of integers using the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the search range
 * @right: Right index of the search range
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value in the array,
 *         or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    if (left > right)
        return -1;

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
    {
        if (mid == left || array[mid - 1] != value)
            return mid;
        else
            return binary_search_recursive(array, left, mid, value);
    }
    else if (array[mid] < value)
        return binary_search_recursive(array, mid + 1, right, value);
    else
        return binary_search_recursive(array, left, mid - 1, value);
}

