#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: pointer to a structure
 * @n: data of the list
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;
tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
	return (NULL);
tmp->n = n;
tmp->next = *head;
*head = tmp;
return (*head);
}
