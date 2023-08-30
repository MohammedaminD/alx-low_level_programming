#include "main.h"
/**
 * factorial-a function that prints factorial of a number
 *
 * @n : integer type pointer input variable
 * Return: -1 for error, or the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
