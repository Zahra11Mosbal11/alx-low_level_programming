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

	if (n == 0)
	{
		printf("is %d and is 0\n", n);
	}
	else if (n < 6)
	{
		printf("is %d and is less than 6 and not 0\n", n);
	}
	else if (n > 5)
	{
		printf("is %d and is greater than 5\n", n);
	}
	return (0);
}
