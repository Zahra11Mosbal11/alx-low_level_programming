#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - start of the code
 * @separator:the string to be printed between numbers.
 * @n:the number of integers passed to the function.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list number;

	va_start(number, n);
	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		int num = va_arg(number, int);

		if (i == (n - 1))
		{
			printf("%d\n",num);
		}
		else
		{
			printf("%d%s ", num, separator);
		}
	}
}
