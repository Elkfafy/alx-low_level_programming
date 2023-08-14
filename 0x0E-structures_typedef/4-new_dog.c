#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creat new dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 *
 * Return: a dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size;
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
		return (NULL);
	for (size = 0; name[size] != '\0'; size++)
		;
	new_dog->name = malloc((size + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (size = 0; name[size] != '\0'; size++)
		new_dog->name[size] = name[size];
	new_dog->name[size] = '\0';
	new_dog->age = age;
	for (size = 0; owner[size] != '\0'; size++)
		;
	new_dog->owner = malloc(size * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (size = 0; owner[size] != '\0'; size++)
		new_dog->owner[size] = owner[size];
	new_dog->owner[size] = '\0';
	return (new_dog);
}
