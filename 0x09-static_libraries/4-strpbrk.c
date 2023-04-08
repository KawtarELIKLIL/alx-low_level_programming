#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*@s: input char
*@accept: bytes to accept
*Return: pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
