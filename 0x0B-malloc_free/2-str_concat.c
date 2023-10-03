#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Entry point
 *
 *@s1: the first string
 *@s2: the second string
 *Return: pointer if string is not null
*/
char *str_concat(char *s1, char *s2)
{
	char *cp1, *cp2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	cp1 = malloc(strlen(s1) + 1);
	cp2 = malloc(strlen(s2) + 1);

	if (cp1 == NULL || cp2 == NULL)
	{
		return (NULL);
	}

	strcpy(cp1, s1);
	strcpy(cp2, s2);

	strcat(cp1, cp2);
	return (cp1);
}
