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
	char leet_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char leet_replacements[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0;  j < 52; j++)
		{
			if (s[i] == leet_chars[j])
			{
				s[i] = leet_replacements[j];
				break;
			}
		}
	}
	return (s);
}
