#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a list
 * @h: pointer to a structure
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *temp;
temp = h;
while (temp)
{
count++;
temp = temp->next;
}
return (count);
}
