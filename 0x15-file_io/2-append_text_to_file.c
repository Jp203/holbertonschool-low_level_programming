#include "holberton.h"

/**
  * append_text_to_file - appends text to the end of a file
  * @filename: name of the file
  * @text_content: content of the file
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check_value, num_char;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	num_char = 0;
	if (text_content != NULL)
	{
		while (text_content[num_char] != '\0')
			num_char++;
		check_value = write(fd, text_content, num_char);
		if (check_value < 0)
			return (-1);
	}
	return (1);
}
