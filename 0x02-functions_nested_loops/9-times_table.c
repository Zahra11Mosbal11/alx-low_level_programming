#include "main.h"
/**
 * times_table- Entry point
 *
*/
void times_table(void)
{
	int i, j, s;


	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			s = i * j;

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
				_putchar(s / 10 + '0');
				_putchar(s % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
