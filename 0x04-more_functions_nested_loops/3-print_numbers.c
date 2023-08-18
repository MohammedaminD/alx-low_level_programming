#include "main.h"

/**
  * print_numbers - prints numbers from 0-9
  *
  * Return: Always 0 (Success)
  */
void print_numbers(void)
{
	int m;

	while (m < 10)
	{
		_putchar(m);
		m++;
	}
	_putchar('\n');
}
