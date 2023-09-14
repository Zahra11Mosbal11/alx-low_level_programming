#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: void
*/
void more_numbers(void)
{
	int num = '0';
	int line = 0;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
