#include "main.h"
/**
 * char *_memcpy-a function that copies memory area
 * @n : integer input variable
 * @dest : pointer char input variable
 * @src : pointer char input variable
 * Return:pointer value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
