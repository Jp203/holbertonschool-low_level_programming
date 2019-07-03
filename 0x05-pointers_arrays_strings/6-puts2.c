#include "holberton.h"
/**
  * puts2 - Print every other character of a string.
  *
  * @str: String to be printed.
  *
  * Return: Void.
  */
void puts2(char *str)
{
	char *last = str;
	char *first = str;
	char hot;

	int j = 0, w = 0, p;

	while (*last != '\0')
	{
		last++;
		j++;
	}

	last--;
	j--;

	if (j % 2 == 1)
		p = (j + 1) / 2;
	else
		p = j / 2;
	while (*last != '\0' && w < p)
	{
		hot = *first;
		*first = *last;
		*last = hot;
		first++;
		last++;
		w++;
	}
}

