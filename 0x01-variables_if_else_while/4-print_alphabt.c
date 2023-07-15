#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succss)
 */
int main(void)
{
char lower = 'a';
while (lower <= 'z' && (lower != 'e' && lower != 'z'))
{
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
