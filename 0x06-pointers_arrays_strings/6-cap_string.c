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
		if (isspace(s[i - 1]) || s[i - 1] == ',' || s[i - 1] == ';'
		|| s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?'
		|| s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\t' || s[i - 1] == '\n')
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
