#include "main.h"
#include <string.h>
/**
 * *_strchr - Entry point
 *
 *@s: the first string
 *@c: the second string
 *Return: ret string
*/
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
