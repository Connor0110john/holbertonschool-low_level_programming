#include <stdio.h>
include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	putchar(c);
	putchar('\n');
}

/**
 * main - entry point
 *
 * Return: Awlays 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
