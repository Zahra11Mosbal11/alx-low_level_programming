#include "main.h"
#include <string.h>
/**
 * *_strcat - Entry point
 *
 *@dest: the first string
 *@src: the seceand string
 *
 * Return: char val ;
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
