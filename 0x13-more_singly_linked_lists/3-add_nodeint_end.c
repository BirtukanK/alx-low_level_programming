#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer to the first element
 * @n: integer
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *ptr;

tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
	return (NULL);
tmp->n = n;
tmp->next = NULL;

if (*head == NULL)
{
*head = tmp;
return (tmp);
}
ptr = *head;
while (ptr->next)
{
ptr = ptr->next;
}
ptr->next = tmp;
return (tmp);
}
