#include <stdio.h>
/**
 * main - Prints alphabet in lowercase 
 * Return: Always 0 on success
 */
int main(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		/* We dont want "q" or "e" to print */
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		/* Needed to continue thru alphabet */
		alpha++;
	}
	/* New line after alphabet prints */
	putchar('\n');
	return (0);
}
