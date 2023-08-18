#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns sum of all parameters
 * @n: number of arguments
 * Return: sum result
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list num;
va_start(num, n);
if (n == 0)
	return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(num, int);
}
va_end(num);
return (sum);
}
