#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
		{
			printf("Name: (nil)\n");
		}

		else
		{
			printf("Name: %s\n", d->name);
		}

		if (!d->owner)
		{
			printf("owner: (nil)\n");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
