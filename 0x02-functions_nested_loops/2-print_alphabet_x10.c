#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	char lowercase;
	int i = 0;
	/* Variable declaration  */

	/* your code goes there */
	while (i < 10)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
		i++;
	}
}
