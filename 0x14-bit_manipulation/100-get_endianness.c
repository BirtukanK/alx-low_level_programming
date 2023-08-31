#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: nothing
 */
int get_endianness(void)
{
int endian;
endian = 2;

if (endian & 1)
{
return (0);
}
return (1);
}
