#include "main.h"
/**
 * flip_bits - Count the number of bits to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int cont = 0;
	int i;

	for (i = 0; xor != 0; i++)
	{
		cont += xor & 1;
		xor >>= 1;
	}
	return (cont);
}
