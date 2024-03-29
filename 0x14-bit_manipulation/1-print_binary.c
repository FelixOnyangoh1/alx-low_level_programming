#include "main.h"

/**
 * print_binary - print binary equivalent to decimal n0
 * @n: n0 to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
