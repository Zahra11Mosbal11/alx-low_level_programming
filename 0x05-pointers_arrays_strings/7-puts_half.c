#include "main.h"
#include <string.h>
/**
 * puts_half - Entry point
 *@str: the string
 * Return: void
*/
void puts_half(char *str)
{
	int langth = strlen(str);
	int half;

	if (langth % 2 != 0)
	{
		for (half = (langth - 1) / 2; half < langth; half++)
		{
			_putchar(str[half]);
		}
		_putchar('\n');
	}
	for (half = (langth) / 2; half < langth; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
