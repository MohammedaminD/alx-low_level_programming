#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @s : char variable
 * Return:(L) returns the length of string
 */
int _strlen(char *s)
{
	int L;

	for (L = 0; *s != '\0'; ++s)
	{
		++L;
	}
		return (L);
}
