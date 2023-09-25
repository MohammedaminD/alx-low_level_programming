#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list and
 * returns the data of the head node
 * @head: pointer to a pointer to the first node in the linked list
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	head_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (head_data);
}
