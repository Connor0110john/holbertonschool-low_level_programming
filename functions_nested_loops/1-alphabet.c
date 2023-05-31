#include <stdio.h>

/**
 * print_alphabet - print the alphabet
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	putchar('\n');

	return (0);
}

void print_alphabet(void)
