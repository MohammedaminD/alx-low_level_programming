#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of the linked list.
 * @head: pointer to head of list
 * @index: index of node to be returned
 * Return: pointer to nth node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}
	return (temp);
}
