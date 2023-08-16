#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: the name to print
 * @f: pointer to a void function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
