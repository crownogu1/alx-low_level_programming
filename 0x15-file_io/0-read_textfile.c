#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: A pointer to the filename
 * @letters: the number of letters the function should read and print
 *
 * Return: 0 if the file cannot be opened or read of if filename is NULL
 *		otherwise the actual number of bytes it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}
