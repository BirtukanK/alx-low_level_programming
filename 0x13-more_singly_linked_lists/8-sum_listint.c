#include "lists.h"
/**
 * sum_listint - returns sum of all data in the list
 * @head: pointer to the first node
 * Return: 0 or result
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
	return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
