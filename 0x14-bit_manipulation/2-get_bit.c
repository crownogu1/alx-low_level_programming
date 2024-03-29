#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the value of bit at any given index.
 * @n: the bit to be gotten.
 * @index: the index at which the value is gotten, starting from 0.
 *
 * Return: -1 if an error occurs, otherwise the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
