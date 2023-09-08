#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat -a function that concatenates two strings
 *
 * @s1 : char variable pointer
 * @s2 : char variable pointer
 * @n : integer input variable
 * Return:pointer value for success or NULL for failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = (char *)malloc(sizeof(char) * len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	i++;
	return (ptr);
}
