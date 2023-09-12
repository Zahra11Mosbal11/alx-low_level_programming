#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Return: 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
