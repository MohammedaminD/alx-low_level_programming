#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file-a function that appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text content to add to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");

	if (filename == NULL)
	{
		return (-1);
	}
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}
	fclose(file);
	return (1);
}
