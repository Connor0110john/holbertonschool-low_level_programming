#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet();
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	putchar('\n');
	return (0);
}
