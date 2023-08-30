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
ptr = *head;
if (ptr == NULL)
	return (NULL);
idx--;
while (idx != 0)
{
ptr = ptr->next;
idx--;
}
new->next = ptr->next;
ptr->next = new;

return (new);
}
