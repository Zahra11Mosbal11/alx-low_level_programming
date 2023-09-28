#include "main.h"
#include <string.h>
/**
 * _puts_recursion - Entry point
 *
 *@s: the first string
 *Return:void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
