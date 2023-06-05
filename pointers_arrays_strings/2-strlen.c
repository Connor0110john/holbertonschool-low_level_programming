#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns lenght of string.
 * Return: @*s is lenght of string.
 */
int _strlen(char *s)
{
	size_t l = 0;

	while (*s++)
		l++;

	return (l);
}
