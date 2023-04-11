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
	return (len);
}

/**
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: a pointer or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *newp;
	int i, j;

	newp = malloc(size_str(s1) + size_str(s2));
	if (newp == NULL)
		return (NULL);
	for (i = 0; i < size_str(s1); i++)
		newp[i] = s1[i];
	for (j = 0; j < size_str(s2); j++)
	{
		newp[i] = s2[j];
		i++;
	}
	return (newp);
}
