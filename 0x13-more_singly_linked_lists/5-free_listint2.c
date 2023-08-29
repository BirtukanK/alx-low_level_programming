#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a list
 * @head: pointer to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t  *ptr;
if (head == NULL)
	return;
while (*head != NULL)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
}
