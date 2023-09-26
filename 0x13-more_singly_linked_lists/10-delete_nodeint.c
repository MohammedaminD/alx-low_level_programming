#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the
 * node at index of a listint_t linked list
 * @head: pointer to a pointer to the head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp_node;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	temp_node = current->next;
	current->next = temp_node->next;
	free(temp_node);

	return (1);
}
