#include "main.h"
/**
 * *_strchr -a function that locates a character in a string
 *
 * @s : char type pointer input variable
 * @c : char type input variable
 * Return:pointer value
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
