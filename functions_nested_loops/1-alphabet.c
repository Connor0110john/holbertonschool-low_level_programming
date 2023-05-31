#include <stdio.h>

/**
 * main - check code
 *
 * print_alphabet - print the alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet(void);

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
