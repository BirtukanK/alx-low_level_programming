#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * print_list - a function that prints all elements of list
 * @h: pointer to a structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int count = 0;
if (h->str == NULL)
{
printf("[0] (nil)");
}
while(h != NULL)
{
count++;
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (count);
}
