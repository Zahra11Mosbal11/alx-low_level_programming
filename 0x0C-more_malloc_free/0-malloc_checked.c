#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 *
 *@b: the number.
 *
 *Return:void
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
