#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - start of the code
 *@separator: is the string to be printed between the strings
 *@n: is the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	va_start(string, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(string, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
