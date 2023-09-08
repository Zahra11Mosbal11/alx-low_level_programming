#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char lowercase;
	/* Variable declaration  */

	/* your code goes there */

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
