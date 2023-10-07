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
	int i, j;
	int N = n;
	int len1 = strlen(s1);
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

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < N && s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
