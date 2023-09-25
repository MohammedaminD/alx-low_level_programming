#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the linked list
 * @head: Double pointer to the head node/element
 * @n: Data to be stored in the new node.
 *
 * Return: The address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *the_new_node;

	the_new_node = malloc(sizeof(listint_t));
	if (the_new_node == NULL)
		return (NULL);

	the_new_node->n = n;/*this code initializes our new node with value n */
	the_new_node->next = *head;

	*head = the_new_node;/*our new node is now occupies the head node address*/
	return (the_new_node);
}

