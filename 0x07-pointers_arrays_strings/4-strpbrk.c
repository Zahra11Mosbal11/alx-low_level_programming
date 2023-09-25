#include "main.h"
#include <string.h>
/**
 * *_strpbrk - Entry point
 *
 *@accept: the first string
 *@s: the second string
 *Return: dest string
*/
char *_strpbrk(char *s, char *accept)
{
	char *dest;

	dest = strpbrk(s, accept);

	return (dest);
}
