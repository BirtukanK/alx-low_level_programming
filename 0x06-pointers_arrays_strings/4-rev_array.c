#include "main.h"
/**
 * reverse_array - a function that reverses content of an array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
