#include "main.h"
/**
 * more_numbers - function prints from 0-9
 *
 */
void more_numbers(void)
{
	int c, m, j;

	for (j = 0; j < 10; j++)
	{
		c = 0;

		while (c < 2)
		{
			for (m = 48; m <= 57; m++)
			{
				if (c == 1 && m <= 52)
				{
					_putchar(49);
				}
				if (!(c == 1 && m > 52))
				{
					_putchar(m);
				}
			}
			c++;
		}
		_putchar('\n');
	}
}
