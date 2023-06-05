#include "main.h"

/**
 * print_diagonal - prints text diagonal
 * @n: number of '\' to be printed
 */

void print_diagonal(int n)
{
	int line;

	if (line > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('\');
	}
	
	_putchar('\n');
}
