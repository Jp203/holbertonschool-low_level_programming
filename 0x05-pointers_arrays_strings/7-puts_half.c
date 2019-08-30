#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int count1 = 0, count2 = 0;

	while (str[count1] != '\0')
		count1++;
	for (; count2 < count1; count2++)
		if (count2 > ((count1 - 1) / 2))
			_putchar(str[count2]);
	_putchar('\n');
}
