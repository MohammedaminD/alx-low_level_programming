#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - a function that creates a file and write to it
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: (1) on success. (-1) On failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;

		if (write(fd, text_content, len) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
