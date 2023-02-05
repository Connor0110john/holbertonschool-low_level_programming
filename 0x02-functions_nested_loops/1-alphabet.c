#include <stdio.h>

void print_alphabet(void)

/**
 * main -check the code  
 *
 * Return: Always 0.
 */
	int main(void) {
		print_alphabet();
		return 0;
	}

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

