#include "main.h"
/**
 * factorial - a function that returns factorial of a number
 * @n: a number to get its factorial
 * Return: reulst or -1
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0 || n == 1)
	return (1);
else
{
return (n * factorial(n - 1));
}
}
