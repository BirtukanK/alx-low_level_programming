#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches a value using linear search algortithm
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: the value to search for
 * Return: integer value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
