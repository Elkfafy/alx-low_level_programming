#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print dog
 * @d: input dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("Name: ");
	d->name == NULL? printf("(nil)\n") : printf("%s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: ");
	d->owner == NULL? printf("(nil)\n") : printf("%s\n", d->owner);
