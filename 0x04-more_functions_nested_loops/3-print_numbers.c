#include "main.h"

/**
  * print_numbers - prints numbers from 0-9
  *
  * Return: Always 0 (Success)
  */
void print_numbers(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
