#include "main.h"
/**
 * get_endianness - start
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *bit = (char *)&n;

	if (*bit == 1)
		return (1);
	return (0);
}
