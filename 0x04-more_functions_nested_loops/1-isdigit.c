#include <ctype.h>
/**
 * _isdigit - a function to check a digit
 * @c: a number to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
