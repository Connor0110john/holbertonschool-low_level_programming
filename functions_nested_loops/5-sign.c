#include "main.h"

/**
 * print_sign - checks main
 * @n: interger
 * Return: 1, 0 or -1.
 */
int print_sign(int n)
{
	if (n != 0)
	{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	_putchar('-');
	return (-1);
	}
	_putchar('0');
	return (0);
}
