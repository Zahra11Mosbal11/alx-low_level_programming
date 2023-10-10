#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog- check the code
 *
 *@name: name of dog.
 *@age: age of dog.
 *@owner: the owner.
 * Return: pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j;
	int len1 = strlen(name);
	int len2 = strlen(owner);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(strlen(name) + 1);
	for (j = 0; j <= len1; j++)
	{
		ptr->name[j] = name[j];
	}

	ptr->age = age;

	ptr->owner = malloc(strlen(owner) + 1);
	for (i = 0; i <= len2; i++)
	{
		ptr->owner[i] = owner[i];
	}

	return (ptr);
}
