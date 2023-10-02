#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if two number and 1 if not
 */
int main(int argc, char *argv[])
{
	int sum;
	int num1, num2;

	if ((argc - 1) != 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		sum = (num1 * num2);
		printf("%d\n", sum);

		return (0);
	}
}
