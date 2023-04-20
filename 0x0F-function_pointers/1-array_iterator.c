#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - executes a function on each element of array
*@array: input array
*@size: size of array
*@action: pointer to fonction
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
