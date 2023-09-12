#include "main.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @a: The integer from which to extract the last digit.
 *
 * Return: The last digit of `a`.
 */
int print_last_digit(int a)
{
	int last;

	last = (a % 10);
	_putchar(last + '0');
	return (last);
}
