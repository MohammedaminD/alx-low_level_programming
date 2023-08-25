#include "main.h"
/**
 * char *string_toupper-a function that changes all lowercase letters of
 * @*str :a char type input variable
 *Return: character value
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
