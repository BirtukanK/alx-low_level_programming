#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - a function that deletes head node
 * @head: pointer to first node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int i;
if (*head == NULL)
{
return (0);
}
tmp = *head;
*head = tmp->next;
i = tmp->n;
free(tmp);
return (i);
}
