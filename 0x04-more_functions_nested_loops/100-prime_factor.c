#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	long int prime;

	for (prime = 2; prime < x; prime++)
	{
		if (x % prime == 0)
		{
			x = x / prime;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
