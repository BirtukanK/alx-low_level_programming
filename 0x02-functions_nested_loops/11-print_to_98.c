#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */
void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
printf("%d", n);
printf(", ");
}
else if (n >= 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", n);
printf(", ");
}
}
else {
printf("%d", n);

}
}
