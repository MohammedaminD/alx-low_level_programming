#include <stdio.h>
#include "lists.h"
/**
  * print_list - a function that prints all the elements of a linked list
  * @h : head of the list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;  /* Keep count of the number of nodes*/

	while (h)
	{
		if (h->str != NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
		}
	else if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	h = h->next;
	count++;
}
	return (count);
}
