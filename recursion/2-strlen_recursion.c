#include "main.h"

/**
 * _strlen_recursion - returns the lenght of string
 * @s: string to count
 *
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
