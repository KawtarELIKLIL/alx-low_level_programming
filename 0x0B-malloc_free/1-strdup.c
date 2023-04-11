#include "main.h"
#include <stdlib.h>
/**
*_strdup - copy the string in a new pointer
*@str: input string
*Return: a pointer or NULL
*/
char *_strdup(char *str)
{
	char *newp;
	long unsigned int i;

	newp = malloc(sizeof(str));
	if (newp == NULL)
		return (NULL);
	for (i = 0; i < sizeof(str); i++)
		newp[i] = str[i];
	return (newp);
}