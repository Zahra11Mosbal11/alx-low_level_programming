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
	int lastDigit;
	/* Variable declaration  */

	srand(time(0));


	/* Variable declaration  */
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */

	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			       n, lastDigit);
	}
	else if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	return (0);
}
