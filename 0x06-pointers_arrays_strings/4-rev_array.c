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

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
