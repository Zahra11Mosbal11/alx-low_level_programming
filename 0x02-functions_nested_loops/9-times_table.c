#include "main.h"
/**
 * times_table- Entry point
 *
 * Return: 0 (Success)
*/
void times_table(void)
{
	int i, j;


	for (i = 48; i <= 57; i++)
	{

		for (j = 48; j <= 57; j++)
		{
			int s = i * j;

			_putchar(s);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
