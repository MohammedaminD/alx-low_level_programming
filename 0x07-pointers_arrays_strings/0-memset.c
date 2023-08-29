#include "main.h"
/**
 * *_memset -a function that that fills memory with a constant byte.
 * @n : integer input value
 * @s : pointer char input variable
 * @b : char input value
 * Return:pointer value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
