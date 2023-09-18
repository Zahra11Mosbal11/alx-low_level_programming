#include "main.h"
#include <string.h>
/**
 * rev_string - Entry point
 *@s: the string will be reverse
 * Return: void
*/
void rev_string(char *s)
{
	int langth = strlen(s);
	int i;
	int j = 0;


	for (i = (langth - 1); i >= j; i--)
	{
		char r = s[i];

		s[i] = s[j];
		s[j] = r;
		j++;
	}
}
