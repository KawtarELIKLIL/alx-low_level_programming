#include "main.h"
/**
*_strchr - locates a character in a string
*@s: input string
*@c: input character
*Return: a pointer or NULL if not found char
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
			break;
		}
		i++;
	}
	return (0);
}
