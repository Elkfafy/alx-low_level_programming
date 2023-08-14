#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free that dog
 * @d: input dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	d->name = NULL;
	free(d->owner);
	d->owner = NULL;
	free(d);
}
