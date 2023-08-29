#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a list
 * @head: pointer to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *tmp, *ptr;
ptr = *head;
while (ptr != NULL)
{
tmp = ptr->next;
free(ptr);
ptr = tmp;
}
*head = NULL;
}
