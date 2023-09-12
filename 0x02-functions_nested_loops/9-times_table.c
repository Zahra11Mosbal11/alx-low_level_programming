#include "main.h"
/**
 * times_table- Entry point
 *
 * Return: 0 (Success)
*/
void times_table(void)
{
	int i, j;


	for (i = 0; i <  10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			int s = i * j;

			if (j == 0)
			{
				_putchar(s + '0');
			}
			if (s < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else if (s >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(s / 10);
				_putchar(s % 10);
			}
		}
		_putchar('\n');
	}
}
