#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*new_dog - initialize a variable
*@name: name of dog
*@age: age of dog
*@owner: owner of dag
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}
