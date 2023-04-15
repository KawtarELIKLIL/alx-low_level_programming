#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocates memory for an array
*@nmemb: input int
*@size: size of array
*Return: a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newp;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	newp = malloc(size * nmemb);
	if (newp == NULL)
		return (NULL);
	for (n = 0; n < (size * nmemb); n++)
		newp[n] = 0;
	return (newp);
}
