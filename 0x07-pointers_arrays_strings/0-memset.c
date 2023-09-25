#include "main.h"
#include <string.h>
/**
 * *_memset - Entry point
 *
 *@n: the number.
 *@b: the first string
 *@s: the second string
 *Return: s string
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
