#include <stdio.h>
#include "dog.h"
/**
*free_dog - fonction that frees dog
*@d: pointer to my dog
*/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
