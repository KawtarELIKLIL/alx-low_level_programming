#include "main.h"
#include <stdlib.h>
/**
*array_range-  creates an array of integers
*@min: min number
*@max: max number
*Return: a pointer or NULL
*/
int *array_range(int min, int max)
{
	int *array;
	int i, size;
	int j = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
