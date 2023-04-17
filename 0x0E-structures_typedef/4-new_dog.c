#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copy of string
 * @s1: first string
 * @s2: secound string
 * Return: string to be copied
 */
char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
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
	unsigned int nameSize, ownerSize;
	dog_t *myDog;

	myDog = malloc(sizeof(dog_t));
	if (myDog == NULL)
		return (NULL);
	for (nameSize = 0; name[nameSize] != '\0'; nameSize++)
		;
	for (ownerSize = 0; owner[ownerSize] != '\0'; ownerSize++)
		;
	myDog->name = malloc((nameSize + 1) * sizeof(char));
	if (myDog->name == NULL)
	{
		free(myDog);
		return (NULL);
	}
	myDog->owner = malloc((ownerSize + 1) * sizeof(char));
	if (myDog->owner == NULL)
	{
		free(myDog->name);
		free(myDog);
		return (NULL);
	}
	_strcpy(myDog->name, name);
	myDog->age = age;
	_strcpy(myDog->owner, owner);
	return (myDog);
}
