#include <stdio.h>
/**
 * main - Entry point
 * This program will print numbers using putchar function
 * Return - Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(48 + i);
}
putchar('\n');
return (0);
}
