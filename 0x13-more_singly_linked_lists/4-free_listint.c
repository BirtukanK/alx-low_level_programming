#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a list
 * @head: pointer to a structure
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *ptr, *tmp;
ptr = head;
while (ptr != NULL)
{
tmp = ptr->next;
free(ptr);
ptr = tmp;
}
}
