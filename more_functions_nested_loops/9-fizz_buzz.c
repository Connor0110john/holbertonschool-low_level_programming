#include <stdio.h>
#include "main.h"
/**
 * main - Prints numbers from 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for multiples of five
 * Buzz, and for multiples of both three and give, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			dprintf("FizzBuzz");

		else if ((n % 3) == 0)
			dprintf("Fizz");

		else if ((n % 5) == 0)
			dprintf("Buzz");

		else
			dprintf("%d", n);

		if (n == 100)
			continue;
		dprintf(' ');
	}
	dprintf('\n');

	return (0);
}
