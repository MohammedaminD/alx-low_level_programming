#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t NON = 0; /*NON- Number of Nodes*/

	while (h != NULL)
	{
		h = h->next;
		NON++;
	}
	return (NON);
}
