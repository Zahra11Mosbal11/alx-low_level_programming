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

	if (str == NULL)
	{
		return (NULL);
	}
	cp = malloc(strlen(str) + 1);
	if (cp == NULL)
	{
		return (NULL);
	}
	strcpy(cp, str);
	return (cp);
}
