#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\nAge: %f\nOwner: %s\n",
				(*d).name != NULL ? d->name : "(nil)",
				(*d).age,
				(*d).owner != NULL ? d->owner : "(nil)");
	}
}
