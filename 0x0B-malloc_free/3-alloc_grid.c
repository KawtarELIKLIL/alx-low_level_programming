#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - creates a pointer to a 2 dimensional array of int
*@width: size of array
*@height: size of array
*Return: a pointer or NULL
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, h;

	if (width == 0 || height == 0)
		return (NULL);
	array = malloc(sizeof(int) * width);
	for (h = 0; h < width; h++)
		array[h] = malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
