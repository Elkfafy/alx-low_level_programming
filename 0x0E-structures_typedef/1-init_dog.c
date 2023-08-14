#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - init the dog
 * @d: input dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
