#include <ctype.h>
#include "main.h"
/**
 * _islower - Entry point
 * _islower - Check if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if `c` is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int ret;
 /* Variable declaration  */
/* your code goes there */

	if (islower(c) != 0)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
