#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts binary to an unsigned int 
 * @b: pointer to string of character 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
signed int sum = 0, i = 0;
if (b == NULL)
	return (0);

while(b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
sum <<= 1;

if (b[i] & 1)
{
sum += 1;
}
i++;
}
return (sum);
}
