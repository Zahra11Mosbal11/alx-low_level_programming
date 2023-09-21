#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *rot13  - Entry point
 *
 *@s: the second string
 *Return: s string
*/
char *rot13(char *s)
{
	int i, j;
	char leet_chars[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char leet_replacements[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0;  j < 26; j++)
		{
			if (s[i] == leet_chars[j])
			{
				s[i] = leet_replacements[j];
			}
			else if (s[i] == leet_replacements[j])
			{
				s[i] = leet_chars[j];
			}
		}
	}
	return (s);
}
