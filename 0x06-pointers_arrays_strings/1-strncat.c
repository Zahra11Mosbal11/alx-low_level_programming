#include "main.h"
#include <string.h>
/**
 * *_strncat - Entry point
 *
 *@n: the number.
 *@dest: the first string
 *@src: the seceand string
 *Return: dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
