#include "main.h"
#include <stdlib.h>
/**
*size_str - returns size of str
*@s: input str
*Return: size of str
*/
int size_str(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len + 1);
}

/**
*_strdup - copy the string in a new pointer
*@str: input string
*Return: a pointer or NULL
*/
char *_strdup(char *str)
{
	char *newp;
	int i;

	newp = malloc(size_str(str));
	if (newp == NULL)
		return (NULL);
	for (i = 0; i < size_str(str); i++)
		newp[i] = str[i];
	return (newp);
}
