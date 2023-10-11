#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - start
 *@size: of function.
 *@cmp:the function.
 *@array: the array of function.
 * Return:intiger.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
