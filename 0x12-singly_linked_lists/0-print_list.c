#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - a function that prints all elements of list
 * @h: pointer to a structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
