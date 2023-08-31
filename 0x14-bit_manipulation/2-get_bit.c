#include "main.h"
/**
 * get_bit - a function that returns a bit at a given index
 * @n: a bit
 * @index: an index
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i = 1;
if (index > sizeof(n) * 8)
{
return (-1);
}
i <<= index;

if (i & n)
	return (1);
else
return (0);

}
