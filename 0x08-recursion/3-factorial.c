#include "main.h"
#include <string.h>
/**
 * factorial - Entry point
 *
 *@n: the number.
 *Return: -1 if anegatev number and 1 if 1 or 0 or N
*/
int factorial(int n)
{
	int N;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		N = 1;
		return (N);
	}
	else
	{
		N = n * factorial(n - 1);
		return (N);
	}
}
