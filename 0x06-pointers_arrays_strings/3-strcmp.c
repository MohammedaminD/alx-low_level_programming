#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1 : a char type input variable
 * @s2 : a char type input variable
 * Return:n
 */
int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
		n = s1[i] - s2[i];
		return (n);
	}
	}
	return (n);
}
