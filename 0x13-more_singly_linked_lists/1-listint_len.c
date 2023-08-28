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
const listint_t *tmp;
tmp = h;
while (tmp)
{
count++;
tmp = tmp->next;
}
return (count);
}
