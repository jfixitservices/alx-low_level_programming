#include "main.h"

/**
 * get_endianness - This checks if a machine is little or big endian
 * Return: This returns 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
