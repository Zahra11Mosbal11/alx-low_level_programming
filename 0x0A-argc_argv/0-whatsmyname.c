#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 *@argc: the number of argument
 *@argv: the argument
 *Return: 0 
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
