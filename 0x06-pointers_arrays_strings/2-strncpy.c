#include "main.h"
#include <string.h>
/**
 * *_strncpy - Entry point
 *
 *@n: the number.
 *@dest: the first string
 *@src: the second string
 *Return: dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
