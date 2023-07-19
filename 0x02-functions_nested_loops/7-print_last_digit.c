#include "main.h"
/**
 * print_last_digit - Entry point
 * @r : number to get its last digit
 * Return: integer value
 */
int print_last_digit(int r)
{
int last;
last = r % 10;
if (last < 0)
last = last * -1;
_putchar(last + '0');
_putchar('\n');
return (last);
}
