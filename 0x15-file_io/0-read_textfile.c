#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to string with name of file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 if something goes wrong
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readcount, writecount;
	char *Fcontent;

	Fcontent = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (Fcontent == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(Fcontent);
		return (0);
	}

	readcount = read(fd, Fcontent, letters);
	close(fd);

	if (readcount == -1)
	{
		free(Fcontent);
		return (0);
	}

	writecount = write(STDOUT_FILENO, Fcontent, readcount);

	if (writecount == -1 || writecount != readcount)
	{
		free(Fcontent);
		return (0);
	}

	free(Fcontent);
	return (writecount);
}
