#include "main.h"
/**
  *print_alphabet_x10 - prints lower case alphabets 10 times
  *
  *Return: always 0 (success)
  */
void print_alphabet_x10(void)
{
	int m;
	int R = 1;

	while (R < 11)
	{
		for (m = 97; m < 123; m++)
		{
			_putchar(m);
		}
		R++;
		_putchar('\n');
	}
}
