#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init the dog
 * @d: input dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int str_size;

	for (str_size = 0; name[str_size] != 0; str_size++)
		;
	d->name = malloc(str_size * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return;
	}
	for (str_size = 0; name[str_size] != 0; str_size++)
		d->name[str_size] = name[str_size];
	d->age = age;
	for (str_size = 0; owner[str_size] != 0; str_size++)
		;
	d->owner = malloc(str_size * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return;
	}
	for (str_size = 0; owner[str_size] != 0; str_size++)
		d->owner[str_size] = owner[str_size];
}
