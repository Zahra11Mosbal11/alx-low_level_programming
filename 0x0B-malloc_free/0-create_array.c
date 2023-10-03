#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 *
 *@size: the number.
 *@c: the string
 *Return: NULL if size = 0
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc((size + 1) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, c, size);
	ptr[size] = '\0';
	return (ptr);
}
