#include "holberton.h"
/**
 * read_textfile - reads a text file and prints to S.O
 * @filename: The file's name
 * @letters: The file's length
 * Return: 1 if sucess, -1 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fdesc, size, error = -1;

	if (filename)
	{
		fdesc = open(filename, O_RDONLY);
		buffer = malloc(sizeof(char) * letters);
		if (fdesc > 0 && buffer)
		{
			size = read(fdesc, buffer, letters);
			if (size >= 0 && (size_t)size <= letters)
				error = write(STDOUT_FILENO, buffer, size);
			close(fdesc);
		}
	}
	free(buffer);
	return ((error >= 0 && error == size) ? error : 0);
}
