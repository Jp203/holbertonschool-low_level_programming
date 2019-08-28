#include "holberton.h"

void exit_97(void);
void exit_98(char *str);
void exit_99(char *str);
void exit_100(int fd);

/**
  * main - copies the contents of a file to another file
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	char *buff;
	int fd_new, fd_original;
	int check_new, check_original;

	if (argc != 3)
		exit_97();
	fd_original = open(argv[1], O_RDONLY);
	if (fd_original == -1)
		exit_98(argv[1]);
	fd_new = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_new == -1)
		exit_99(argv[2]);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (0);
	check_original = read(fd_original, buff, 1024);
	do {
		if (check_original == -1)
			break;
		check_new = write(fd_new, buff, check_original);
		if (check_new == -1)
			exit_99(argv[2]);
		check_original = read(fd_original, buff, 1024);
	} while (check_original > 0);
	if (check_original == -1)
	{
		free(buff);
		exit_98(argv[1]);
	}
	free(buff);
	check_new = close(fd_new);
	if (check_new == -1)
		exit_100(fd_new);
	check_original = close(fd_original);
	if (check_original == -1)
		exit_100(fd_original);
	return (0);
}

/**
  * exit_97 - exit status 97
  */
void exit_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
  * exit_98 - exit status 98
  * @str: name of file
  */
void exit_98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
  * exit_99 - exit status 99
  * @str: name of file
  */
void exit_99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
  * exit_100 - exit status 100
  * @fd: name of file
  */
void exit_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
