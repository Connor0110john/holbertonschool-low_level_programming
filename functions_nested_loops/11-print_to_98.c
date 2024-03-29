#include "main.h"

/**
 * print_to_98 - Prints all natural number from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_printf("%d, ", n--);
		_printf("%\n", n);
	}

	else
	{
		while (n < 98)
			_printf("%d, ", n++);
		_printf("%d\n", n);
	}
}
