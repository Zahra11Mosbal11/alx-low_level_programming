#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Entry point
 *
 *@s: the first string
 *Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
