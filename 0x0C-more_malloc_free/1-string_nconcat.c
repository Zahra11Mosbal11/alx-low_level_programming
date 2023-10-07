#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 *
 *@n: the number.
 *@s1: the first string
 *@s2: the second string
 *Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len = strlen(s1) + n + 1;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
