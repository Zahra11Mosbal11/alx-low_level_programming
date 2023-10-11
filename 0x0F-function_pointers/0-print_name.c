#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - start
 *@name: the name.
 *@f: the function.
 *
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
