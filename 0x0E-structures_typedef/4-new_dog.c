#include <stdio.h>
#include "dog.h"
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

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
