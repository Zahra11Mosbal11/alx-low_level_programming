#include "main.h"
/**
 * set_bit - Set the value of a bit to 1 at the given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index (0-based) of the bit to set.
 * Return: 1 if it worked
 * or -1 if an error occurred (e.g., if the index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
