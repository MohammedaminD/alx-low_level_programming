#include"main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: char variable
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
