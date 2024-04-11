#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - start
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return:the value or -1 if not persent.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t s;

	if (array == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		if (value == array[s])
			return (s);
	}
	return (-1);
}
