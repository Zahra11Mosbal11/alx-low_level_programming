#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - Entry point
 *
 *@min: the first number
 *@max: the second number
 *Return: pointer to intiger
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
