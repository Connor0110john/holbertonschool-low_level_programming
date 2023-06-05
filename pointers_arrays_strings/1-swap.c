#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two inegers
 * @a: first integer to swap
 * @b: second integer to swap
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
