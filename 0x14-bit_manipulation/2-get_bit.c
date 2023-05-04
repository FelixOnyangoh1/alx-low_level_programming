#include "main.h"

/**
 * get_bit - returns val of a bit at an index in a decimal n0
 * @n: n0 to search
 * @index: index of bit
 *
 * Return: va of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
