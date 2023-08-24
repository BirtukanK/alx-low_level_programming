#include "lists.h"
/**
 * _putchar - a function to print a character
 * @c: character to print
 * Return: character
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
