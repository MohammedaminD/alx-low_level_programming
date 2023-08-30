#include "main.h"
/**
 * _pow_recursion -a function that returns the value of
 * x raised to the power of y
 * @x : integer type pointer input variable
 * @y : integer type pointer input variable
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		n = x * _pow_recursion(x, y - 1);
		return (n);
	}
}
