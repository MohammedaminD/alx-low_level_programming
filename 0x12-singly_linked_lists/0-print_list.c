#include <stdio.h>
#include "lists.h"
/**
  * print_list - a function that prints all the elements of a linked list
  * @h : head of the list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	const list_t *current = h;   /* Create a pointer to the head of the list*/
	size_t count = 0;            /* Keep track of the number of nodes*/

	while (current != NULL)      /* Loop through the list until the end (NULL)*/
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	return (count);
}
