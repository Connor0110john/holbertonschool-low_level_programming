#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i =48; i <= 57; i++)
	{
	 for (j = i + 1; j <= 57; j++)
	{
		for (k = j + 1; k <=57; k++)
		{
			putchar(i);
			putchar(44);
			putchar(32);
			putchar(j);
			putchar(44)
				putchar(32);
			putchar(k);
			putchar(10);
		}
	}
	}
	return (0);
}
