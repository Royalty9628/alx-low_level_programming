#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable
 * @d: the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: name of the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
