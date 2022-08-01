#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - function that create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int newName, newOwner, x;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{
		return (NULL);
	}
	for (newName  = 0; *(name + newName); newName++)
		newName++;
	for (newOwner = 0; *(owner + newOwner); newOwner++)
		newOwner++;
	newdog->name = malloc(newName * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (x = 0; x < newName; x++)
		*(newdog->name + x) = *(name + x);

	newdog->age = age;

	newdog->owner = malloc(newOwner * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (x = 0; x < newOwner; x++)
		*(newdog->owner + x) = *(owner + x);

	return (newdog);
}
