#include "lists.h"
/**
 * dlistint_len - function to get number of elements
 * @h: pointer to node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
unsigned int count = 0;
const dlistint_t *list;

if (list == NULL)
{
return (0);
}
while (list)
{
list = list->next;
count++;
}
return (count);
}
