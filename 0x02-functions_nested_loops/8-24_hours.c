#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(i);
_putchar(i);
_putchar(':');
_putchar(j);
_putchar(j);
_putchar('\n');
}
}
}
