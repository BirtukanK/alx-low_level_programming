#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
void print_array(int *array, unsigned int l, unsigned int r);
int recursive_search(int *array, unsigned int left, unsigned int right,
		     int value);
/**
 * binary_search - a function that searchs a value using binary searc
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	if (array && size)
	{
		return (recursive_search(array, 0, (int)size - 1, value));
	}
	return (-1);
}

/**
 * recursive_search - search for value recursively
 * @array: pointer to an array's first value
 * @left: left side of array
 * @right: right side of array
 * @value: value to search
 * Return: index where value is located
 */
int recursive_search(int *array, unsigned int left, unsigned int right,
		     int value)
{
	int middle;


	/* If value is smaller then middle, look in first half of array */
	if (right >= left)
	{
		middle = left + (right - left) / 2;
		print_array(array, left, right);

		/* If search finds value in middle, return value */
		if (array[middle] == value)
		{
			return (middle);
		}

		/* If element is less than middle, search left subarray */
		if (array[middle] > value)
		{
			return (recursive_search(array, left, middle - 1, value));
		}

		/* Otherwise search for value in right subarray */
		return (recursive_search(array, middle + 1, right, value));
	}
	/* If element doesn't exist return -1 */
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @l: left value
 * @r: right value
 * Return: array
 */

void print_array(int *array, unsigned int l, unsigned int r)
{
	int index = 0;

	printf("Searching in array: ");

	while (l <= r)
	{
		if (index > 0)
		{
			printf(", ");
		}
		index = l++;
		printf("%d", array[index++]);
	}
	printf("\n");
}
