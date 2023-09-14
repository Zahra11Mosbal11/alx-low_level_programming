#include "main.h"
#include <ctype.h>
/**
 * _isupper - Entry point
 *
 * @c: the checks for uppercase character
 * Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	int ret;

	if (isupper(c))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}

