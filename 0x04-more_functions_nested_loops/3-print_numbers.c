#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Return: 0 (Success)
*/
void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
	       	digit++;
	}
	_putchar('\n');
}
