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
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("%d FizzBuzz");

		else if (n % 3 == 0)
			printf("%d Fizz");

		else if (n % 5 == 0)
			printf("%d Buzz");

		else
			printf("%d", n);

		if (n != 100)
			
			printf("%d ");
		n++;

	}
	printf('\n');

	return (0);
}
