#include "main.h"

/**
 * set_bit - This sets a bit at a given index to 1
 * @n: This is the pointer to the number to change
 * @index: This index of the bit to set to 1
 *
 * Return: This return 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
