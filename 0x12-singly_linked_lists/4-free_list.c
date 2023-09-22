#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to head of the linked list
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (head != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
