#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;

	myDog = malloc(sizeof(dog_t));
	if (!myDog)
		return (NULL);
	myDog->name = name;
	myDog->age = age;
	myDog->owner = owner;
	return (myDog);
}
