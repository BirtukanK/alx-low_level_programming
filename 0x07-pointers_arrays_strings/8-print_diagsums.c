#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: array pointer
 * @size: size of an array
 * Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0, i;
for (i = 0; i < size; i++)
{	
sum1 = sum1 + *(a + (size * i + i));
sum2 = sum2 + *(a + (size * i + size - 1 - i));
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
