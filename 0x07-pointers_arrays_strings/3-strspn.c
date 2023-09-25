#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 *
 *@accept: the first string
 *@s: the second string
 *Return: ret string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ret;

	ret = strspn(s, accept);

	return (ret);
}

