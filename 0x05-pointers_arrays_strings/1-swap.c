#include "main.h"
/**
 * swap_int - function that swaps values of 2 integers
 * @a: first number
 * @b: second number
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
