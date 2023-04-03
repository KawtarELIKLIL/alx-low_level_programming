#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: input char
*@accept: bytes to accept
*Return: pointer to the memory area s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int i, j = 0;
	int k, l;

	while (accept[j] != '\0')
		j++;
	while (s[i] != '\0')
	{
		if (s[i] == 32)
			break;
		i++;
	}
	for (k = 0; k < i; k++)
	{
		for (l = 0; l < j; l++)
		{
			if (s[k] == accept[l])
				m++;
		}
	}
	return (m);
}
