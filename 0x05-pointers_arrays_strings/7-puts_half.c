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

	for (half = (langth) / 2; half < langth; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
