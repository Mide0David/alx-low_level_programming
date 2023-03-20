#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the element in init_dog
 * @d: the container to initialize
 * @name: the value to initialize the char type
 * @age: the value for the int type in the container
 * @owner: the value for the 2nd char type
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(d));

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
