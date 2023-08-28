#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a structure
 * @head: pointer to the first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
