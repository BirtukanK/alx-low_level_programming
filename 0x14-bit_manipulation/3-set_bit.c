#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: number passed
 * @index: the index
 * Return: integer value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(n) * 8)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
