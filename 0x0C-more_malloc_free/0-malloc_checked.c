#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
*malloc_checked - allocates memory
*@b: input int
*Return: a pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return ((void *)98);
	return (ptr);
}
