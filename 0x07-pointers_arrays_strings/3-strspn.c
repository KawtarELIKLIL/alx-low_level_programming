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

	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			k = 0;
			while (accept[k] != '\0')
			{
				if (s[i] == accept[k])
					m++;
				k++;
			}
		}
		else
			break;
		i++;
	}
	return (m);
}
