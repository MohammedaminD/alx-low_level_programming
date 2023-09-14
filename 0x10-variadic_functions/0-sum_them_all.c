#include "variadic_functions.h"
/**
  * sum_them_all - a function that returns the sum of
  * all its parameters
  * @n: number of parameters/arguments passed
  * Return: 0 for success and if n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum;)
}
