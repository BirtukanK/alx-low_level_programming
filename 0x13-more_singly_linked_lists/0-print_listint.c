#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints elements of linked list
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
