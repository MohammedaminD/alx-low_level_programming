#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: the integer to extract the last digit from
  * Return: value of the last digit
  */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar('0' - a);
		return (-1 * a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}
