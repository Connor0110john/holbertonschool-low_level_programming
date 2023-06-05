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
			printf("int FizzBuzz");

		else if (n % 3 == 0)
			printf("int Fizz");

		else if (n % 5 == 0)
			printf("int Buzz");

		else
			printf("int %d", n);

		if (n != 100)
			
			printf("int ");
		n++;

	}
	printf("int \n");

	return (0);
}
