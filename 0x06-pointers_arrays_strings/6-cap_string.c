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
	int i;
	int new_word = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isspace(s[i]) || s[i] == ',' || s[i] == ';'
		|| s[i] == '.' || s[i] == '!' || s[i] == '?'
		|| s[i] == '"' || s[i] == '(' || s[i] == ')'
		|| s[i] == '{' || s[i] == '}' || s[i] == '\t' || s[i] == '\n')
		{
			new_word = 1;
		}
		else if (new_word && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			new_word = 0;
		}
	}
	return (s);
}
