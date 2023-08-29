#include "main.h"
/**
 * *_strpbrk -a function that searches a string for any set of bytes
 *
 * @s : a char type pointer input variable
 * @accept : a char type pointer input variable
 * Return:pointer value
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
}
