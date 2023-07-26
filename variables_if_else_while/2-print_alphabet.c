#include <stdio.h>

/*
 * main - entry point
 * Description: prints the alphabet in lowercase, follwed by a new line.
 * Return: Return 0
 */

int main (void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
