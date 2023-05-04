#include "main.h"

/**
 * flip_bits - puts altogether n0 of bits to change
 * to acquires from 1 n0 to another
 * @n: 1st n0
 * @m: 2nd n0
 *
 * Return: n0 of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

