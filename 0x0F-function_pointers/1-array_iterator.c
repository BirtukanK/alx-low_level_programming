#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: an array to execute
 * @size: size of array
 * @action: pointer to a function
 * Return: result of executed function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (array && size > 0 && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
