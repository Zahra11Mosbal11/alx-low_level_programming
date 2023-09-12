#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
	char lowercase;
	/* Variable declaration  */

	/* your code goes there */

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}

