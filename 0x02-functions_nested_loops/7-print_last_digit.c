#include "main.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @a: The integer from which to extract the last digit.
 *
 * Return: The last digit of `a`.
 */
int print_last_digit(int a)
{
	int l;

	l = (a % 10);

	if (l < 0)
	{
		 l = -l;
	}
	_putchar(l + '0');
	return (l);
}
