#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succss)
 */
int main(void)
{
char lower = 'a';
while (lower <= 'z')
{
if (lower == 'e')
{
continue;
}
else if (lower == 'q')
{
continue;
}
else
{
putchar(lower);
}
lower++;
}
putchar('\n');
return (0);
}
