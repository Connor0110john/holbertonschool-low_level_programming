#include <stdio.h>
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
			printf('FizzBuzz');

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf('%d', n);

		if (n == 100)
			continue;
		printf(' ');
	}
	print('\n');

	return (0);
}
