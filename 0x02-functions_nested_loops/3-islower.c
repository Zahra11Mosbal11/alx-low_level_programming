#include <ctype.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: 0 (Success)
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
