#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog struct
 * @d: input dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("%s", d->name);
	printf("\nAge: ");
	printf("%.6f", d->age);
	printf("\nOwner: ");
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("%s", d->owner);
	putchar('\n');
}
