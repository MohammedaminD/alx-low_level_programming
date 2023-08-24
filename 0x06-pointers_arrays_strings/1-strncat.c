#include "main.h"
/**
 * *_strncat -a function that concatenates two strings with
 * at most n bytes
 * @dest : a char type input variable
 * @src : a char type input variable
 * @n : byte limiter
 * Return:pointer value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
