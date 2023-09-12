#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * Return: 0 (Success)
*/
int _isalpha(int c)
{
	int ret;

	if (isalpha(c) != 0)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}

