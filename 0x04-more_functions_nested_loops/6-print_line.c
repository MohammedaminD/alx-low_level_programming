#include "main.h"
/**
 * print_line -prints the numbers, from 0 to 9, followed by a new line
 * @n: that indicate how many times we will draw
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n ; n >= 0; n--)
			_putchar('_');
	}
	_putchar('\n');
}
