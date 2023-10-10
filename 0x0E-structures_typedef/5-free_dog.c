#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - check the code
 *@d: dog.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
