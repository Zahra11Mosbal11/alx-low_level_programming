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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalpha(s[i]))
		{
			char base = islower(s[i]) ? 'a' : 'A';

			s[i] = ((s[i] - base + 13) % 26) + base;
		}
	}
	return (s);
}
