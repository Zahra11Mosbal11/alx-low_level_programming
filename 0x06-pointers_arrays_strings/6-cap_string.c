#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *cap_string - Entry point
 *
 *
 *@s: the first string
 *Return: s
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (isspace(s[i - 1]) || s[i - 1] == ',' || s[i - 1] == ';'
		|| s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?'
		|| s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\t'
		|| s[i - 1] == '\n')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
