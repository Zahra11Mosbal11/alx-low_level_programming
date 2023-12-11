#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - Entry point
 *@str: string will print it
 * Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
