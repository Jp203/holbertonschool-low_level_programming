#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments.
 * @ac: Count of strings that need to be concatenated.
 * @av: Strings to concatenate.
 * Return: String which was concatenated on success, Null on failure.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	char *ct = NULL;

	/* NULL CHECK */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Gets count of strings in array */
	for (a = 0; a < ac; a++)
		/* Iterate thru array till end of strings */
		for (b = 0; av[a][b] != '\0'; b++, c++)
			;
	/* Allocate memory */
	ct = malloc(sizeof(char) * (c + ac + 1));
	/* NULL CHECK */
	if (ct == NULL)
		return (NULL);
	/* Ensure a has correct count */
	for (a = 0, c = 0; a < ac; a++)
	{
		/* Set pointer to length of all strings */
		for (b = 0; av[a][b] != '\0'; b++, c++)
			ct[c] = av[a][b];
		ct[c] = '\n';
		c++;
	}
	ct[c] = '\0';
	return (ct);
}
