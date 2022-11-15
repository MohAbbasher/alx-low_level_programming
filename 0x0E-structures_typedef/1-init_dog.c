#include "dog.h"

/**
 * init_dog - initilize dog struct
 *
 * @d: dog struct
 * @name: name
 * age: age
 * owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
