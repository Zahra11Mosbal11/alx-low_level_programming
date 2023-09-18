#include "main.h"
#include <string.h>
/**
 * print_rev - Entry point
 *@s: string will revers
 * Return: void
*/
void print_rev(char *s)
{
	int langth = strlen(s);
	int i;

	for (i = (langth - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
