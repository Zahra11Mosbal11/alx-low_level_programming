#include "main.h"
#include <string.h>
/**
 * *_strstr - Entry point
 *
 *@needle: the first string
 *@haystack: the second string
 *Return: dest string
*/
char *_strstr(char *haystack, char *needle)
{
	char *dest;

	dest = strstr(haystack, needle);

	return (dest);
}
