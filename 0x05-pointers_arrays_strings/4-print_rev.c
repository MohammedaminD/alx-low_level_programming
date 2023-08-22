#include"main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: char variable
 */
void print_rev(char *s)
{
	int i,j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		while (i > 0)
		{
			_putchar(s[i]);
			i--;
		}
	}
	_putchar('\n');
}
