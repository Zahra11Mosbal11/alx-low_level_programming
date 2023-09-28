#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Entry point
 *
 *@s: the first string
 *Return:sum the number
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);

}
