#include "main.h"
#include <stdlib.h>
/**
*size_str - returns size of str
*@s: input str
*Return: size of str
*/
unsigned int size_str(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: input  int
*Return: a pointer or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newp;
	unsigned int i, j = 0;

	if (n > size_str(s2))
		n = size_str(s2);
	newp = malloc(size_str(s1) + n + 1);
	if (newp == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < size_str(s1); i++)
			newp[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++)
		{
			newp[i] = s2[j];
			i++;
		}
	}
	newp[i] = '\0';
	return (newp);
}
