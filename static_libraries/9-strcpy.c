#include "main.h"

/**
 * _strcpy - copies string pointed by @src, termination null to buffer by dest
 * @dest: a buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: a pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
