#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog@owner: owner of dog
 * Return: NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy;
	char *ocpy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	ncpy = strdup(name);
	if (!ncpy && name)
	{
		free(new);
		return (NULL);
	}
	ocpy = strdup(owner);
	if (!ocpy && owner)

	{
		free(ocpy);
		free(new);
		return (NULL);
	}
	new->name = ncpy;
	new->age = age;
	new->owner = ocpy;

	return (new);
}
