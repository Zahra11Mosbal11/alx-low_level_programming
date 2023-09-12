#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * _isalpha - Check if a character is a letter,lowercase or uppercase.
 * @c: The character to check.
 *
 * Return: 1 if `c` is a letter, lowercase or uppercase, 0 otherwise.
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

