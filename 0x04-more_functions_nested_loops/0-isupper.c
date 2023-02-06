/*
 * File: 0-isuperr.c
 *
 */

#include "main.h"
#include <stdio.h>

/**
 * isupper - checks for upppercase characters
 * return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0)
}
