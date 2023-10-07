#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - Entry point
 *
 *@nmemb: the first number
 *@size: the second number
 *Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, size * nmemb);
	return (ptr);
}
