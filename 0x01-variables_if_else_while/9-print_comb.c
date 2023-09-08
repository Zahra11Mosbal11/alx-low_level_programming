#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numberz;
	/* Variable declaration  */

	/* your code goes there */

	for (numberz = 48; numberz <= 57; numberz++)
	{
		putchar(numberz);
		if (numberz != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
