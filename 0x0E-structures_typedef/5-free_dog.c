#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free the dog
 * @d: input dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(&(d->age));
	free(d->owner);
	free(d);
}
