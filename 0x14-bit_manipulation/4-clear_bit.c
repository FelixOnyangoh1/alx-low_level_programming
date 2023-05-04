#include "main.h"

/**
 * clear_bit - puts the val of a given bit to 0
 * @n: ptr to the n0 to change
 * @index:  of the bit to be cleared
 *
 * Return: on 1 for success, otherwise -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

