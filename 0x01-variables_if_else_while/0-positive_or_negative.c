#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;
	/* Variable declaration  */
	srand(time(0));


	/* Variable declaration  */
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
