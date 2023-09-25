#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint -a function that prints all the elements of a linked list
 *
 * @h: pointer to list of integers
 * Return: number of nodes/count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t NON = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		NON++;
		h = h->next;
	}
	return (NON);
}
