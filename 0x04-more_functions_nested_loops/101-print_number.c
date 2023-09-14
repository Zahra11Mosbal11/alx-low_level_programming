#include "main.h"
/**
 * print_number - Entry point
 * *@n: the number */
void print_number(int n)
{
	unsigned int num;

	if (num == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	char buffer[12];
        int index = 0;

		while (num > 0)
		{
			buffer[index++] = '0' + (num % 10);
			num /= 10;
		}
		for (int i = index - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
		}
}
