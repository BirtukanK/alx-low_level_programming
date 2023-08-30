#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to first node
 * @index: index of the node
 * Return: NULL or nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
if (head == NULL)
{
return (NULL);
}
for (count = 0; count < index; count++)
{
head = head->next;
if (head == NULL)
	return (NULL);
}
return (head);
}
