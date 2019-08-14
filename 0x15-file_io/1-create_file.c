#include "holberton.h"

/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: NULL terminated string to write to file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, check_values;
	unsigned int num_char;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	num_char = 0;
	if (text_content != NULL)
	{
		while (text_content[num_char] != '\0')
			num_char++;
		check_values = write(fd, text_content, num_char);
		if (check_values == -1 || (unsigned int)check_values < num_char)
			return (-1);
	}
	close(fd);
	return (1);
}
