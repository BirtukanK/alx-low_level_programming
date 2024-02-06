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
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else
		{
			return(i);
                        break;
		}
	}
	return(-1);
}
