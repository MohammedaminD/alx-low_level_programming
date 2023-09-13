#include "function_pointers.h"
/**
 * int_index -a function that searches for an integer.
 * @array: the array the integer will be searched for
 * @size: number of elements in the array
 * @cmp: appointer to function used to compare values
 *
 * Return: index of the first element, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
