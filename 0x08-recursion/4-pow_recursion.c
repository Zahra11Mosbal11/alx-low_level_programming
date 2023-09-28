#include "main.h"
#include <string.h>
/**
 * _pow_recursion - Entry point
 *
 *@x: the number.
 *@y: the second number
 *Return: intiger
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
