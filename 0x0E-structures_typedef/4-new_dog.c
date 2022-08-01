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
	unsigned int newName, newOwner, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	for (newName = 0; name[newName]; newName++)
		;
	newName++;
	newdog->name = malloc(newName * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < newName; i++)
		newdog->name[i] = name[i];
	newdog->age = age;
	for (newOwner = 0; owner[newOwner]; newOwner++)
		;
	newOwner++;
	newdog->owner = malloc(newOwner * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < newOwner; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
