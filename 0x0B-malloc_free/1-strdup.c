#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 *
 *@str: the string
 *Return: NULL if str = NULL,
*/
char *_strdup(char *str)
{
	char *cp;

	cp = malloc(strlen(str));

	if (str == NULL)
	{
		return (NULL);
	}
	cp = strdup(str);
	return (cp);
}
