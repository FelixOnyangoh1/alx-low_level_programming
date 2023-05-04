#include "main.h"

/**
 * set_bit - this sets a bit at given index to 1
 * @n: ptr to the n0 to be changed
 * @index: index of the bit to set to 1
 *
 * Return: returns 1 for success,otherwise -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

