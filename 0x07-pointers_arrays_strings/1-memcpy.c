#include "main.h"
#include <string.h>
/**
 * *_memcpy - Entry point
 *
 *@n: the number.
 *@dest: the first string
 *@src: the second string
 *Return: dest string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
