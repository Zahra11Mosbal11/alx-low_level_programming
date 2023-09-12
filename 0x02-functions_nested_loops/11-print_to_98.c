#include "main.h"
/**
 * print_to_98 - Entry point
 *
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i / 10 % 10 + '0');
		_putchar(i % 10 + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
