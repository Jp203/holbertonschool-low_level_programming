#include "holberton.h"
/**
  * print_chessboard - Print chessboard.
  *
  * @a: The chessboard to be printed.
  *
  */
void print_chessboard(char (*a)[8])
{
	int j, p;

	p = 0;
	j = p;


	while (j < 8)
	{
		p = 0;
		while (p < 8)
		{
			_putchar(a[j][p]);
			p++;
		}
		_putchar('\n');
		j++;
	}
}
