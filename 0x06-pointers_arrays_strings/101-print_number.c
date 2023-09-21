#include "main.h"
#include <string.h>
/**
 * print_number - Entry point
 *
 *@n: the number.
 *Return: void
*/
void print_number(int n)
{
	unsigned int N;

	N = n;

	if (n < 0)
	{
		_putchar('-');
		N = -n;
	}
	if (N / 10 != 0)
	{
		print_number(N / 10);
	}
	_putchar(N % 10 + '0');
}
