#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4;
	/* Variable declaration  */

	/* your code goes there */

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = num1; num3 <= 57; num3++)
			{
				for (num4 = (num1 == num3) ? (num2 + 1) : 0; num4 <= 9; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (!(num1 == 57 && num2 == 57 && num3 == 57 && num4 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
