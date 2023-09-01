#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: integer
 * @index: the index
 * Return: integer value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1 << index;
if (index < sizeof(n) * 8)
{
*n = (*n & ~i);
return (1);
}

return (-1);
}
