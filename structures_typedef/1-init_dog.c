#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that init a var of struct dog
 * @d: struct to init
 * @name: name of dog
 * @age: age of dog
 * @age: age of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;d->owner = owner;
	}
}
