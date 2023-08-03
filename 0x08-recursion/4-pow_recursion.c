#include "main.h"
/**
 * _pow_recursion - a function that returns x power of y
 * @x: a number to raise
 * @y: a number to power by
 * Return: -1 or result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else if (y == 1)
	return (x);
return (x * _pow_recursion(x, y - 1));
}
