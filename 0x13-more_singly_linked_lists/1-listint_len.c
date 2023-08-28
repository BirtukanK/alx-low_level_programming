#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints elements of linked list
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
