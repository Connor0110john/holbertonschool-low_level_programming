#include "main.h"

/**
 * _isalpha - check main
 * @c: check
 * Description: checks for alphabetic character
 * Return: 1 if its a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
	return (1);

	else

	return (0);
}
