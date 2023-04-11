#include "main.h"
#include <stdlib.h>
/**
*create_array -  creates an array of chars and initializes it
*@size: size of array
*@c: initialized char
*Return: a pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size);
	for (i =0; i < size; i++)
		array[i] = c;
	
	return (array);
}
