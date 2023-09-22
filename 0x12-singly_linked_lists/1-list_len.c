#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements from
 * a linked list
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
