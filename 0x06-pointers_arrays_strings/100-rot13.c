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
	char up[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char done[] = "nNoOpPqQrRsStTuUvVwWhHyYzZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == up[j])
			{
				s[i] = done[j];
				break;
			}
			else if (s[i] == done[j])
			{
				s[i] = up[j];
				break;
			}
		}
	}
	return (s);
}
