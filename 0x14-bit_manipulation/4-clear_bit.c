#include "main.h"

/**
 * clear_bit - This sets the value of a given bit to 0
 * @n: This is the pointer to the number to change
 * @index: This is the index of the bit to clear
 *
 * Return: This returns 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
