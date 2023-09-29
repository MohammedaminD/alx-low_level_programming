#include "main.h"

/**
 * clear_bit - a function yhat sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int to modify
 * @index: index of the bit to set to 0
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
	{
	*n &= ~(1UL << index);
	}
	else
	{
		return (-1);
	}
	return (1);
}
