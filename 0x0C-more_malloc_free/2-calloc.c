#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocates memory for an array
*@nmeb: input int
*@size: size of array
*Return: a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	newp = malloc(size * nmemb);
	if (newp == NULL)
		return (NULL);
	return (newp);
}
