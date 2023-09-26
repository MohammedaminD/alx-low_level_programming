#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list(safe version)
 * @head: double pointer to the head node
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *temp, *current;
	size_t count = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = *head;
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
		{
			break;
		}
	}
	*head = NULL;
	return (count);
}
