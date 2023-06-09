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
	int dest_len = 0, n;
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

return (dest);
}
