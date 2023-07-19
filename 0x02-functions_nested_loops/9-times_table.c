#include "main.h"
/**
 * times_table - prints the times tabel
 * Return:void
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
if (result <= 9)
{
_putchar(i * j);
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (i + j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
