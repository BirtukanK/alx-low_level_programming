#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */
void jack_bauer(void)
{
int i, j, k, l;
int a = 9;
for (i = 0; i <= 2; i++)
{
if (i == 2)
{
a = 3;
}
j = 0;
for (j = 0; j <= a; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{	
_putchar('0' + i);
_putchar('0' + j);
_putchar(':');
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
}
}
}
}
}
