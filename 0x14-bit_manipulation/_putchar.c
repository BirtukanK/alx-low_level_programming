#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character
 * @c: a character to print
 * Return: character
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
