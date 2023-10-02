#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 If no number and 1 If one of the number contains symbols
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i, j;


	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
