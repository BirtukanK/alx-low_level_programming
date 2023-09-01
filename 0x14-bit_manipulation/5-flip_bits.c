#include "main.h"
/**
 * flip_bits - returns number of bits to flip
 * @n: first number to flip
 * @m: second number to flip
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = 0, j;

j = n ^ m;

while (j > 0)
{
if (j & 1)
{
i++;
}
j >>= 1;
}
return (i);
}
