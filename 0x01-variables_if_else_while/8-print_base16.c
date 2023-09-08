#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char numberz;
	/* Variable declaration  */

	/* your code goes there */

	for (numberz = '0'; numberz <= '9'; numberz++)
	{
		putchar(numberz);
	}
	for (numberz = 'a'; numberz <= 'f'; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
