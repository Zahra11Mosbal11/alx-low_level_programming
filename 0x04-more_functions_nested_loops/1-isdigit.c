#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry point
 *
 * @c: the checks for a digit (0 through 9).
 * Return: 1 if c is a digit and 0 otherwise
*/
int _isdigit(int c)
{
	int ret;

	if (isdigit(c))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}
