#include "main.h"

/**
 * print_last_digit
 * @n: interger number
 * Return: last digit of n..
 */
{
	int m;

	m = abs(n % 10);
	_putchar(m + '0');
	return (m);
}
