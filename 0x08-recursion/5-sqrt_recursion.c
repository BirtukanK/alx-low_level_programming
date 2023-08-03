#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of a num
 * @n: a number to get its square root
 * Return: -1 or result
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - function to find square root
 * @n: number to find square root
 * @y: square root
 * Return: int
 */
int square(int n, int y)
{
if (y * y == n)
	return (y);
else if (y * y < n)
	return (square(n, y + 1));
else 
	return (-1);
}
