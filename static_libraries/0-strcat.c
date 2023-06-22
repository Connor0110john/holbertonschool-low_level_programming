#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * char *_strcat - a function that concatenates two strings
 *
 * @src: string to append dest to.
 *
 * @dest: string that src appends to.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
