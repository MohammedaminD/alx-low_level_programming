#include "main.h"
#include <stddef.h>

/**
 * set_bit - function yhat sets the value of a bit to 1 at a given index.
 * @n: pointer to unsigned long int
 * @index: unsigned int representing the index of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}
	else
	{
	*n |= (1 << index);
	}
	return (1);
}
