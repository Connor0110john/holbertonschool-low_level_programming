#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zer
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", argc - 1);
	return (0);
}
