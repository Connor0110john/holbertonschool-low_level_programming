#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of _ characters that are printed
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
