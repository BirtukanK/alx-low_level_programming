#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index of the list to add new node
 * @n: value of new node
 * Return: NULL or address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr, *new;
unsigned int i = 0;
new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = NULL;

if (*head == NULL && idx != 0)
	return (NULL);

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

if (idx != 0)
	{
	ptr = *head;
	for (; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
		return (NULL);
	}

new->next = ptr->next;
ptr->next = new;

return (new);
}
