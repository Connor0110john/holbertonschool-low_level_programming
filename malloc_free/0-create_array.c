#include <stdio.h>
#include <stdlib.h>

/*
 * *create_array - creates an array of chars, and initalizes it with a specific char.
 * @int: size of array
 * @c: initialization of each element of the character array created.
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	if (i == 0)
	return (NULL);\

	A = malloc(sizeof(char) * size);

	if (A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		A[i] = c;

	return(A);
}
