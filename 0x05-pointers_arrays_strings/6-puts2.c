#include "main.h"
#include <string.h>
/**
 * puts2 - Entry point
 *@str: tha string
 * Return: void
*/
void puts2(char *str)
{
	int langth = strlen(str);
	int i;

	for (i = 0; i < langth; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
