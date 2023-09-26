#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all data values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
