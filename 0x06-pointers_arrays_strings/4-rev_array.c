#include "main.h"
/**
 * reverse_array -a function that reverses the content of
 * an array of integers
 *
 * @a : an integer type input variable
 * @n : a integer type input variable
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
