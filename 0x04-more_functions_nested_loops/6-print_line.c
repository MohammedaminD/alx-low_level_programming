#include "main.h"
/**
 * print_line -prints the numbers, from 0 to 9
 * @n : integer
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = n; m > 0; m--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
