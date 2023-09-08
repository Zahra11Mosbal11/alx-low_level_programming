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

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'e')
		{
			lowercase++;
		}
		else if (lowercase == 'q')
		{
			lowercase++;
		}
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
