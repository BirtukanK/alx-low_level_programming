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
_putchar('48' + result);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
