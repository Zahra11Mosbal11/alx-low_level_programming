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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' ||
		    s[i] == '\t' ||
		    s[i] == '\n' ||
		    s[i] == ',' ||
		    s[i] == ';' ||
		    s[i] == '.' ||
		    s[i] == '!' ||
		    s[i] == '?' ||
		    s[i] == '"' ||
		    s[i] == '(' ||
		    s[i] == ')' ||
		    s[i] == '{' ||
		    s[i] == '}' ||
		    i == 0)
		{
			i++;
			if((s[i]>='a' && s[i]<='z'))
			{
				s[i]=s[i]-32;
			}
		}
	}
	return (s);
}
