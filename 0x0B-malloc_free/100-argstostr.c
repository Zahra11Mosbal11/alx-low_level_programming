#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *  - Entry point
 *
 *@ac: the number.
 *@av: the string
 *Return: NULL if ac == 0 or av == NULL
*/
char *argstostr(int ac, char **av)
{
	char *argment;
	int i;
	int total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
        
		total_length += strlen(av[i]) + 1;
	}
	
	argment = (char *)malloc(total_length + 1);

	if (argment == NULL)
	{
		return (NULL);
	}
	argment[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(argment, av[i]);
		strcat(argment, "\n");
	}

	return (argment);
}
