#include <stdio.h>

/**
 * print_alphabet - print alphabet in uppercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; ++c)
	putchar(c);
	putchar('\n');
}

/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
